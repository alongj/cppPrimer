#ifndef CPPPRIMER_TVFM_H
#define CPPPRIMER_TVFM_H

class Tv;

class Remote {
public:
    enum State {
        Off, On
    };
    enum {
        MinVal, MaxVal = 20
    };
    enum {
        Antenna, Cable
    };
    enum {
        TV, DVD
    };
private:
    int mode;
public:
    Remote(int m = TV) : mode(TV) {}

    bool volup(Tv &t);

    bool voldown(Tv &t);

    void onoff(Tv &t);

    void chanup(Tv &t);

    void chandown(Tv &t);

    void set_mode(Tv &t);

    void set_input(Tv &t);

    void set_chan(Tv &t, int c);
};

class Tv {
public:
    friend void Remote::set_chan(Tv &t, int c);

    enum State {
        Off, On
    };
    enum {
        MinVal, MaxVal = 20
    };
    enum {
        Antenna, Cable
    };
    enum {
        TV, DVD
    };

    Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input{TV} {};

    void onoff() { state = (state == On) ? Off : On; }

    bool ison() const { return state == On; }

    bool volup();

    bool voldown();

    void chanup();

    void chandown();

    void set_mode() { mode = (mode == Antenna)? Cable : Antenna; }

    void set_input() { input = (input == TV)? DVD : TV ;}

    void settings() const;

private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
};


inline bool Remote::volup(Tv &t) {
    return t.volup();
}

inline bool Remote::voldown(Tv &t) {
    return t.voldown();
}

inline void Remote::onoff(Tv &t) {
    t.onoff();
}

inline void Remote::chanup(Tv &t) {
    t.chanup();
}

inline void Remote::chandown(Tv &t) {
    t.chandown();
}

inline void Remote::set_mode(Tv &t) {
    t.set_mode();
}

inline void Remote::set_input(Tv &t) {
    t.set_input();
}

inline void Remote::set_chan(Tv &t, int c) {
    t.channel = c;
}

bool Tv::volup() {
    if (volume < MaxVal)
    {
        volume++;
        return true;
    }
    else
        return false;
}

bool Tv::voldown() {
    if ( volume > MinVal)
    {
        volume--;
        return true;
    }
    else
        return false;
}

void Tv::chanup() {
    if (channel < maxchannel){
        channel++;
    }
    else
        channel = 1;
}

void Tv::chandown() {
    if (channel > 1)
    {
        channel--;
    }
    else
        channel = maxchannel;
}

void Tv::settings() const {
    using std::cout;
    using std::endl;
    cout << "TV is " << (state == Off? "Off": "On") << endl;
    if(state == On)
    {
        cout << "Volume setting = " << volume << endl;
        cout << "Channel setting = " << channel << endl;
        cout << "Mode = " << (mode  == Antenna? "antanna": "cable") << endl;
        cout << "Input = " << (input == TV? "TV": "DVD") << endl;
    }
}


#endif //CPPPRIMER_TVFM_H

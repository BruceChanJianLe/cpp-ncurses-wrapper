#include "ncurses/nc.hpp"

namespace ncw
{
    nc::nc(bool classic_break)
    {
        initscr();
        if(classic_break)
            cbreak();
        else
            raw();
    }

    nc::~nc()
    {
    //  Deallocates memory and ends ncurses
        endwin();
    }

    void nc::init()
    {
        ;
    }

    void nc::update_screen()
    {
        refresh();
    }

    void ncprint()
    {
        ncstream >> col_;
    }
}; // namespace ncw

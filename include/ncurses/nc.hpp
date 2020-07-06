#ifndef __NCW_H_
#define __NCW_H_

#include <ncurses.h>
#include <sstream>

namespace ncw
{
/**
 * @class nc
 * @brief nc stands for ncurses, where ncw means ncurses wrapper.
 *        Use this wrapper class to leverage the C++ and ncurses ability.
 */
    class nc
    {
    private:
        /**
         * @brief This function initialize the class
         * @details This function basically initializes the screen
         *          and set up the memory.
         */
        void init();

        int col_;
        int row_;

    public:
        /**
         * @brief Constructor of ncurses wrapper
         * @param classic_break
         * @details break is a boolean value set to true for classic Ctrl-c
         *          and Ctrl-z breaks. Else using raw() which user defines the
         *          keys to perform what the user define.
         */
        nc(bool classic_break);
        ~nc();

        /**
         * @brief update_screen
         */
        void update_screen();

        /**
         * @brief Print of screen
         * @param
         */
        void ncprint();

        std::stringstream ncstream;
    };

}; // namespace ncw


#endif

#ifndef PROMPT_HPP
#define PROMPT_HPP

class Prompt
{
    public:
        Prompt(char s, char c, char q);
        void printMenu();
    private:
        char  start;
        char custom;
        char   quit;
        double customTime;
};

#endif // PROMPT_HPP

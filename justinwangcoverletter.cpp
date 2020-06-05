// Justin Wang
// June 4, 2020
// My cover letter, designed as an AMA

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int questionnumber = 0;
    
    cout << "Hi! My name is Justin Wang. Welcome to my cover letter. Here's a list of the questions you can ask." << endl << endl;

    cout << "1. Tell me a little bit about yourself." << endl;
    cout << "2. What kind of games have you played?" << endl;
    cout << "3. What sort of skills do you have?" << endl;
    cout << "4. Have you tried Core? What do you think?" << endl;
    cout << "5. You're a really cool, interesting guy. What if I have more questions?" << endl << endl;
    
    
    cout << "Please enter the question number that you have below, or enter 0 to quit: " << endl;
    cin >> questionnumber;
    cout << endl;

    while (questionnumber != 0)
    {
        if (questionnumber == 1)
        {
            cout << "Tell me a little bit about yourself." << endl << endl;

            cout << "I grew up playing video games. When my dad introduced me to Warcraft, " << endl;
            cout << "I was instantly hooked.  I'm not exactly sure why he chose to introduce me" << endl;
            cout << "to a strategy game as the first game I would play, but I loved controlling the units" << endl;
            cout << "and making them follow my mouse across the map.  " << endl << endl;

            cout << "My passion for video games grew with me, and as I got older, I would balance schoolwork," << endl;
            cout << "music lessons, and tennis to play on the weekends with my friends. I loved games" << endl;
            cout << "that were collaborative, so communication was always key for the group I played with.  " << endl;
            cout << "Typically, I play support or DPS in a raid.  Seeing numbers fly off the boss or helping my  " << endl;
            cout << "teammates do it is one of my personal favorite things to see. Having a successful raid where " << endl;
            cout << "everyone worked in sync was the best, because I would always, 100%, experience post-game afterglow."<< endl << endl;

            cout << "As I entered high school, I decided to join ASB (student government).  It was there that"<< endl;
            cout << "grew my typically introverted personality to encompass some extrovert qualities as well."<< endl;
            cout << "I also discovered, outside of my love for analysis, a love for interacting with people. "<< endl;
            cout << "From my own experience in being introverted, most people, unless they are extroverts themselves, " << endl;
            cout << "won't be willing to share their voice, or even have a voice in the first place.  It takes a lot of  " << endl;
            cout << "effort and time, but once it happens, it's so worth it to see.  That's what I want to do in this position." << endl;
            cout << "I see a lot of developers that don't get to see their games succeed, and it'd be an amazing opportunity" << endl;
            cout << "to get to work with these people." << endl << endl;
        }
        else
        if(questionnumber == 2)
        {
           cout << "What kind of games have you played?" << endl << endl;

           cout << "All kinds!" << endl;
           cout << "Strategy games (Warcraft and Starcraft) " << endl;
           cout << "RPGs (Skyrim Elder Scrolls V) " << endl;
           cout << "FPSs (Call of Duty franchise) " << endl;
           cout << "MMOs (Warframe and Destiny 2) " << endl;
           cout << "Sandbox games (GTA V and Watchdogs)" << endl;
           cout << "Browser games (such as Moomoo.io and surviv.io)" << endl;
           cout << "Mobile games (Clash of Clans and Brawl Stars)" << endl << endl;
           cout << "There are a lot more that I can't think of currently, " << endl;
           cout << "but I have extensive experience and enjoy playing multiple genres. " << endl;
           cout << "I think a recent favorite genre of mine has been mobile games because " << endl;
           cout << "they're easy to pick up and I haven't had the time to play much else." << endl << endl;
        }
        else
        if(questionnumber == 3)
        {
            cout << "What sort of skills do you have?" << endl << endl;

            cout << "Currently, I'm majoring in Data Science and Statistics, and " << endl;
            cout << "I've been working towards double majoring in Communications and " << endl;
            cout << "a certification with UCSB's Technology Management Program." << endl;
            cout << "From my progression in these curriculum, I've learned to: " << endl << endl;
            cout << "- Think critically about the way I do things and why I do them" << endl;
            cout << "- Manage my time effectively" << endl;
            cout << "- Communicate effectively and politely" << endl;
            cout << "- Juggle multiple roles and responsibilities as a student with extracurriculars" << endl;
            cout << "- Understand and apply problem solving techniques" << endl;
            cout << "- And lastly, become responsive and resilient to whatever environment I'm put in" << endl << endl;
        }
        else
        if(questionnumber == 4)
        {
            cout << "Have you tried Core? What do you think?" << endl << endl;

            cout << "I really like the interface.  Downloading and playing the game is a very simple process and " << endl;
            cout << "I enjoy that because a tutorial isn't required to understand how to use the software." <<  endl;
            cout << "I've playtested a couple of the published games and I'm very impressed with what people have created on the platform." << endl; 
            cout << "In terms of the creator tools, importing content from core as well as from the community is very easy, and I like that" << endl;
            cout << "you can import kits such as the NPC AI kit that Aphrim showed in his tutorial video." << endl;
            cout << "I don't have much experience designing and coding games, but I would love to give you more feedback when " << endl;
            cout << "I test it more throughout the summer. In short, I think this is a great product. " << endl << endl;
        }
        else
        if(questionnumber == 5)
        {
            cout << "You're a really cool, interesting guy. What if I have more questions?" << endl << endl;

            cout << "Aww thanks.  I really appreciate that.  You can email me at jwang616@ucsb.edu!" << endl << endl;
        }
        else
        {
            cout << "Please enter a valid question number, or enter 0 to quit: " << endl;
            cin >> questionnumber;
        }
        
        cout << "What other questions do you have for me? If you've gone through all the options, enter 0 to quit: " << endl;
        cin >> questionnumber;
        cout << endl;
    }

    cout << "Thanks for reading my cover letter! I hope to hear from you soon." << endl;
     
    return 0;
}
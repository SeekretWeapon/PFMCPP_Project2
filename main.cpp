#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 int 
 char
 bool
 float 
 unsigned int 
 double
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int filterCutoff = -2, masterVolume = -1, filterFreq = 4;
    char rootNote = 'C', majorThird = 'E', majorFifth = 'G';
    bool isNoteInScale = true, isNoteTheSame = false, isThereAnInput = true;
    float lfo = 257387, attack = 5353, decay = 25528;
    double mids = 23.5685739, treble = 73.687346282, bass = 35.74362382;
    unsigned int midiChannel = 1, midiCC = 42, midiNote = 27;



    
    ignoreUnused(number, filterCutoff, masterVolume, filterFreq, rootNote, majorThird, majorFifth, isNoteInScale, isNoteTheSame, isThereAnInput, lfo, attack, decay, mids, treble, bass, midiChannel, midiCC, midiNote); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void getKeyboardInfo(unsigned int lowestKey, unsigned int highestKey)
{ 
    ignoreUnused(lowestKey, highestKey); 
}
/*
 2)
 */
int transformMidi(int midiInputValue)
{ 
    ignoreUnused(midiInputValue); 
    return midiInputValue++;
}
/*
 3)
 */
void setLfoRange(int min = 0, int max = 127)
{
    ignoreUnused(min, max);
}
/*
 4)
 */
bool isMidiNoteInScale(int midiNoteValue, char rootNote)
{
    ignoreUnused(midiNoteValue, rootNote);
    return true;
}
/*
 5)
 */
bool isNoteC (int midiValue)
{
    ignoreUnused(midiValue);
    return true;
}
/*
 6)
 */
bool isEqLevel(double bass, double mids, double treble)
{
    ignoreUnused(bass, mids, treble);
    return {};
}
/*
 7)
 */
int setToZero(int bassLevel = 0, int midLevel = 0, int trebleLevel = 0)
{
    ignoreUnused(bassLevel, midLevel, trebleLevel);
    return {};
}
/*
 8)
 */
void getMidiInfo(int channel = 1, int device = 1, int value = 42)
{
    ignoreUnused(channel, device, value);
}
/*
 9)
 */
bool isThereSound(bool volumeUp = true, bool deviceConfigured = true, bool soundOutput = true)
{
    ignoreUnused(volumeUp, deviceConfigured, soundOutput);
    return true;
}
/*
 10)
 */
bool amIDoingThisRight(int scaleOfOneToTen = 7, bool doIPass = true, bool canIThinkOfMore = true)
{
    ignoreUnused(scaleOfOneToTen, doIPass, canIThinkOfMore);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    getKeyboardInfo(1, 127);
    //2)
    auto transformedMidi = transformMidi(5);
    //3)
    setLfoRange(27,42);
    //4)
    auto noteInScale = isMidiNoteInScale(3, 'c');
    //5)
    auto NoteIsC = isNoteC(12);
    //6)
    auto eqLevel = isEqLevel(4.2,4.2,4.2);
    //7)
    auto zero = setToZero(0,0,0);
    //8)
    getMidiInfo(1,1,12);
    //9)
    auto soundOn = isThereSound(true,true,true);
    //10)
    auto didIt = amIDoingThisRight(10, true, true);
    
    ignoreUnused(carRented, getKeyboardInfo, transformMidi,setLfoRange, isMidiNoteInScale, isNoteC, isEqLevel, setToZero, getMidiInfo, isThereSound, amIDoingThisRight, transformedMidi, noteInScale, NoteIsC, eqLevel, zero, soundOn, didIt);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

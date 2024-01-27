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
 float
 bool
 double
 char
 unsigned int
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

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
    
    int myAge = 100;
    int numberOfCats = 10;
    int numberOfDogs = 5;
    float myHeight = 5.9f;
    float desserts = 9.5f;
    float piecesOfPaper = 5.3f;
    bool isOn = true;
    bool isOff = false;
    bool returnsValue = true;
    double myWeight = 170.0;
    double roomLengthInMeters = 12.0;
    double buildingHeightInFeet = 40.0;
    char myInitial = 'C';
    char lastNameInitial = 'D';
    char nameOfAvenue = 'F';
    unsigned int myBill = 50;
    unsigned int numberOfCars = 1;
    unsigned int customerCount = 10;
    
    ignoreUnused(number, myAge, numberOfCats, numberOfDogs, myHeight, desserts, piecesOfPaper, isOn, isOff, returnsValue, myWeight, roomLengthInMeters, buildingHeightInFeet, myInitial, lastNameInitial, nameOfAvenue, myBill, numberOfCars, customerCount); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
/* bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 
*/

int rideMyBike(int distanceInMiles = 10, double distanceInKilometers = 16.09344)
{
    ignoreUnused(distanceInMiles, distanceInKilometers);
    return {};
}



bool lightsAreOn(bool isOn = true)
{
     ignoreUnused(isOn);
     return {};
}



int djPlayMusic(int numOfSongsPlayed, int numOfGenres, int setTimeInMinutes = 20)
{
     ignoreUnused(numOfSongsPlayed, numOfGenres, setTimeInMinutes);
     return {};
}



void satelliteInOrbit(float distanceTraveledInMiles = 500.f, double timeInSpaceInHours = 1.0, unsigned int speedOfSatellite = 500)
 {
      ignoreUnused(distanceTraveledInMiles, timeInSpaceInHours, speedOfSatellite);
 }



int performingDancers(int numOfDancers, int numOfSongs = 7)
 {
      ignoreUnused(numOfDancers, numOfSongs);
      return {};
 }



void drivingCar(int distanceInMiles, float amountOfFuelConsumed, double timeSpentDriving)
 {
      ignoreUnused(distanceInMiles, amountOfFuelConsumed, timeSpentDriving);
 }



void runFromThePolice(int fencesHopped, int policeCars, bool foundSafeHouse = true)
 {
      ignoreUnused(fencesHopped, policeCars, foundSafeHouse);
 }



void skiDownHill(bool fracturedMyShoulder, float speedTraveled)
 {
      ignoreUnused(fracturedMyShoulder, speedTraveled);
 }



char readBook(char firstLetterOfChapter = 'A', char lastLetterOfChapter = 'Z')
 {
      ignoreUnused(firstLetterOfChapter, lastLetterOfChapter);
      return {};
 }



void writeStory(int numOfChapters, int numOfWords = 1000, int numOfCharacters = 6000)
 {
      ignoreUnused(numOfChapters, numOfWords, numOfCharacters);
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
//  auto carRented = rentACar(6, 2);
    
//1)
    auto myBikeRide = rideMyBike(10, 16.09344);
//2)
    auto ceilingLights = lightsAreOn(true);
//3)
    auto djSet =  djPlayMusic(20, 2, 60);
//4)
    satelliteInOrbit(500.f, 1.0, 500);
//5)
    auto dancePerformance = performingDancers(7);
//6)
    drivingCar(1, 20.f, 3.0);
//7)
    runFromThePolice(5, 2, true);
//8)
    skiDownHill(true, 10.01f);
//9)
    auto readAllOver = readBook('A', 'Z');
//10)
    writeStory(6, 1000, 6000);

    ignoreUnused(myBikeRide, ceilingLights, djSet, satelliteInOrbit, dancePerformance, drivingCar, runFromThePolice, skiDownHill, readAllOver, writeStory);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

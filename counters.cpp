
#include <fstream>
#include <iomanip>

using namespace std;


enum Identifiers { UPPER, LOWER, DIGIT, EOW, EOS, IGNORE} ;

typedef struct {
    int upperCase;
    int lowerCase;
    int digit;
    int word;
    int sentence;
    int ignore;
} Counters; 


// Function Prototypes
void OpenFile(ifstream&); // This function reads a file specified in the parameter. If the file doesnt exist returns error

Identifiers Decode(char character); // This opens the file and decodes characters and returns the identifiers encounterd

void IncrementCounters(Counters& counters, char character);  // This function increments the appropriate counters based on the character in the input

void PrintResult(Counters counters); // Prints the results

void InitializeCounters(Counters& counters); // Initializes the counters


main() 
{
    ifstream text;
    Counters counters;

    openfile(text);
    if (!text)
    {
        cout << "File was not found, exiting" << endl;
	return 1;
    }

    InitializeCounters(counters);

    text.get(character); // get 1 character

    do
    {
        IncrementCounters(counters, character);
	text.get(character);
    } while (text);

    PrintResult(counters);
    text.close();
    return 0;
 }



          
//This function examines the character and increments appropriate counter
void IncrementCounters(Counters &counters, char character)
{
    static bool endOfWord = FALSE;

    switch(Decode(Character))
    {
        case UPPER: Counters.upperCase++;
		    endOfWord = FALSE;
		    break;

        case LOWER: Counters.lowerCase++;
		    endOfWord = FALSE;
		    break;

        case DIGIT: Counters.digit++;
		    endOfWord = FALSE;
		    break;

	case EOW:   if (!endOfWord)
		    {
		        Counters.endOfWord++;
		        endOfWord = TRUE;
		    }
		    break;

        case EOS:   Counters.endOfSentence++;
		    endOfWord = TRUE; 
		    break;

        case IGNORE: Counters.ignore++;
		     break;
    }		     

}



Identifiers Decode(char character)
{
    elseif (isupper(character))
        return UPPER;

    elseif (islower(character))
        return lOWER;

    elseif (isdigit(chracter))
	return DIGIT;

    switch (character)
    {
        case '.' :
        case '?' :
        case '!' : return EOW;
        
        case ' ':
        case ':':
        case ';': return EOS;

        default : return IGNORE;
     }
    return IGNORE;
 }


PrintResults(Counters counter)
{
	// word count = word count + sentence count;
	print result;
}

    

    

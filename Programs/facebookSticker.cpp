/* 
 * File:   main.cpp
 * Author: Thomas S
 *
 * Created on December 21, 2020, 6:09 PM
 * Desc: Facebook sticker 
 *  
Facebook logo stickers cost $2 each from the company store. I have an idea.
I want to cut up the stickers, and use the letters to make other words/phrases.
A Facebook logo sticker contains only the word 'facebook', in all lower-case letters.

Write a function that, given a string consisting of a word or words made up
of letters from the word 'facebook', returns an integer with the number of

stickers I will need to buy.
  get_num_stickers('coffee kebab') -> 3

  get_num_stickers('book') -> 1

  get_num_stickers('ffacebook') -> 2

You can assume the input you are passed is valid, that is, does not contain
any non-'facebook' letters, and the only potential non-letter characters
in the string are spaces.

 */

#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

//Global variables 

//Function prototypes
int get_num_stickers( string ); 


//Execution begins 
int main(int argc, char** argv) {

    //Declaration of variables 
    
    
    //Get number of stickers
    
    
    cout << "You will need " << get_num_stickers("coffee kebab") << " stickers!\n";
    cout << "You will need " << get_num_stickers("book") << " stickers!\n";
    cout << "You will need " << get_num_stickers("ffacebook") << " stickers!\n";


    return 0;

}//End main

//Function definitions
int get_num_stickers( string word ){
    
    int count = 0; //hold the max times any letter occurs in the users word
    int numOfStickers = 1;//number of stickers needed 
    string facebook = "facebook";
    char temp = ' ';
    
    for( int i = 0; i < word.size(); i++ ){
        
        temp = facebook[i]; 
        
        for(int j = 0; j < word.size(); j++ ){
        
            if(temp == word[j]) ++count; //check which letter occurs the most in the users word, that will be the number of stickers
       
        }
        
        if ( numOfStickers < count) numOfStickers = count; 
        count = 0; 
        
    }
   
    return numOfStickers; 
}

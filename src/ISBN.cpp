#include "ISBN.h"

// Constructors/Destructors
//  

ISBN::ISBN () {
initAttributes();
}

ISBN::~ISBN () { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void ISBN::initAttributes () {
  book_number = "000000000";
  check_letter = ' ';
  ISBN_prefix = "0";
}


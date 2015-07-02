
#ifndef ISBN_H
#define ISBN_H

#include <string>

/**
  * class ISBN
  * 
  */

class ISBN
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ISBN ();

  /**
   * Empty Destructor
   */
  virtual ~ISBN ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return bool
   */
  bool isIsbn13 () const
  {
  }


  /**
   * @return bool
   */
  bool isValidFormat () const
  {
  }


  /**
   * @return bool
   */
  bool isValidCheckCode ()
  {
  }


  /**
   * isValidFormat() && isValidCheckCode
   * @return bool
   */
  bool isValid ()
  {
  }


  /**
   * @return char
   */
  char getCheckCode ()
  {
  }


  /**
   * @return string
   */
  string getIsbnPrefix () const
  {
  }


  /**
   * @return unsigned long
   */
  unsigned long toInteger ()
  {
  }


  /**
   * @return string
   * @param  format
   */
  string toString (string format = "") const
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  string book_number;
  char check_letter;
  string ISBN_prefix;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of book_number
   * @param new_var the new value of book_number
   */
  void setBook_number (string new_var)   {
      book_number = new_var;
  }

  /**
   * Get the value of book_number
   * @return the value of book_number
   */
  string getBook_number ()   {
    return book_number;
  }

  /**
   * Set the value of check_letter
   * @param new_var the new value of check_letter
   */
  void setCheck_letter (char new_var)   {
      check_letter = new_var;
  }

  /**
   * Get the value of check_letter
   * @return the value of check_letter
   */
  char getCheck_letter ()   {
    return check_letter;
  }

  /**
   * Set the value of ISBN_prefix
   * @param new_var the new value of ISBN_prefix
   */
  void setISBN_prefix (string new_var)   {
      ISBN_prefix = new_var;
  }

  /**
   * Get the value of ISBN_prefix
   * @return the value of ISBN_prefix
   */
  string getISBN_prefix ()   {
    return ISBN_prefix;
  }
private:



  /**
   * @return char
   * @param  book_number
   */
  static char CheckCode (string book_number)
  {
  }


  /**
   * @return bool
   * @param  book_number
   * @param  check_code
   */
  static bool ValidateFormat (string book_number, char check_code)
  {
  }


  /**
   * @return bool
   * @param  book_number ISBN without dashes and the checksum digit.
   * @param  check_code
   */
  static bool ValidateCheckCode (string book_number, char check_code)
  {
  }

  void initAttributes () ;

};

#endif // ISBN_H

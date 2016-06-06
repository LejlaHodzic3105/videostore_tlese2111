#ifndef _FILM_H
#define _FILM_H

#include <iostream>
#include <string>
#include "person.h"
#include "lista.hxx"


class Film
{
  private:
   std::string _title;
   int _key;
   std::string _description;
   Person _director;
   std::string _productionCompany;
   list<Person> _listOfProducents;
   list<Person> _listOfScenarists;
   list<Person> _listOfActors;
   int _year;
   int _numOfCopies;

  public:
   Film():_year(0),_numOfCopies(0),_key(0){};
   ~Film()=default;
   const std::string getTitle()const {return _title;}
   const std::string getDescription()const {return _description;}
   const std::string getCompany()const {return _productionCompany;}
   int getYear() const {return _year;}
   int getNumOfCopies()const {return _numOfCopies;}
   const list<Person>& getProducents() const{return _listOfProducents;}
   void setTitle(const std::string& title){_title=title;}
   void setDescription(const std::string& description){_description=description;}
   void setCompany(const std::string& company){_productionCompany=company;}
   void setYear(int year){_year=year;}
   void setNumOfCopies(int num){_numOfCopies=num;}
   Film& setDirector(const std::string& name,const std::string& surname){_director.setPerson(name,surname); return *this;}
   void printFilm()const{std::cout<<_title <<" "<< _year<<std::endl;} // pregled sadrzaja videoteke,svi filmovi sortirani po godini 
   void printAllInfo()const; // opcija pregleda svih podataka za odabrani film

  
};







#endif

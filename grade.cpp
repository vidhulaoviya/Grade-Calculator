//
// Created by Oviya on 11/28/2023.
//

#include "grade.h"
#include <iostream>
#include <string>

void grade::welcome() {

    std::cout<<"Welcome to the grade calculator website!!!"<<std::endl;

}

double grade::calc(int percent) {
    double calcarray[100];
    double tot = 0.0; //total score
    int ans = 0; //number of grades you are going to enter
    double score = 0;

    std::cout<<"How many grades would you like to enter: "<<std::endl;
    std::cin>>ans;


    for(int i = 0; i < ans; i++) {
        std::cout<<"Enter your grade out of 100: "<<std::endl;
        std::cin>>calcarray[i];
        tot += calcarray[i];
    }

    tot = tot/ans;
    return tot * (percent / 100.0);
}

double grade::final() {
    int num = 0; //num of subjects, could be one
    std::cout<<"Number of subjects you wish to calculate: "<<std::endl;
    std::cin>>num;

    double hw, quiz, exam, project, final = 0.0;
    for(int i = 0; i < num; i++) {
        int percent = 0;
        double tot = 0.0;

        std::cout<<"Subject " << (1 + i) <<std::endl;

        //Homework
        std::cout<<"Percent of homework: "<<std::endl;
        std::cin>>percent;
        //calc(percent);
        hw = calc(percent);
        std::cout<<"Homework score: " << hw<<std::endl;

        //quiz
        std::cout<<"Percent of quiz: "<<std::endl;
        std::cin>>percent;
        //calc(percent);
        quiz = calc(percent);
        std::cout<<"Quiz score: " << quiz<<std::endl;

        //exam
        std::cout<<"Percent of exam: "<<std::endl;
        std::cin>>percent;
        //calc(percent);
        exam = calc(percent);
        std::cout<<"Exam score: " << exam<<std::endl;

        //project
        std::cout<<"Percent of project: "<<std::endl;
        std::cin>>percent;
        //calc(percent);
        project = calc(percent);
        std::cout<<"Project Score: " <<project<<std::endl;

        tot = hw + quiz + exam + project;
        tot = tot / 5; //averageded grade for a subject

        final += tot; //add the sub grade to the total of all subjects

    }

    final = final / num; //averageded grade of all subjects
    std::cout<<""<<std::endl;
    std::cout<<"Final score: " << final <<std::endl;
    return final;
}







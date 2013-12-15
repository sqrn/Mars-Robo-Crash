/* 
 * File:   Environment.h
 * Author: mariusz
 *
 * Created on 15 grudzień 2013, 10:22
 */

#ifndef ENVIRONMENT_H
#define	ENVIRONMENT_H

#include "Robo.h"


#ifdef	__cplusplus
extern "C" {
#endif

    class Envoronment
    {
    public:
        void init();
        void makeCollision();
        void addRobo(RoboCrush robo);
        void removeRobo(RoboCrush robo);
    };


#ifdef	__cplusplus
}
#endif

#endif	/* ENVIRONMENT_H */


/* 
 * File:   Robo.h
 * Author: mariusz
 *
 * Created on 15 grudzień 2013, 10:21
 */

#ifndef ROBO_H
#define	ROBO_H

#ifdef	__cplusplus
extern "C" {
#endif

    class RoboCrush
    {
    public:
        void run();
        void stop();
        void attack(RoboCrush oponent);
        int moveSide(int side);
    };


#ifdef	__cplusplus
}
#endif

#endif	/* ROBO_H */


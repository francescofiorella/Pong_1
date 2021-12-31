/*********************************************************************************************************
**--------------File Info---------------------------------------------------------------------------------
** File name:           pong.h
** Last modified Date:  2021-12-16
** Last Version:        V1.00
** Descriptions:        Prototypes of functions included in the pong.c file
** Correlated files:    GLCD.c
**--------------------------------------------------------------------------------------------------------
*********************************************************************************************************/

// game_status options
typedef enum {STOPPED, STARTED, PAUSED, LOST} Status;

// functions
extern void init_pong( void );
extern void drawBorders( void );
extern void drawPaddle( unsigned int start );
extern void initBall( unsigned int x_start, unsigned int y_start );
extern void drawBall( unsigned int x_start, unsigned int y_start );
extern void updateScore( unsigned int new_score );
extern void updateBestScore( unsigned int new_score );
extern void moveBall( void );
extern void newPong( void );
extern void setLost( void );
extern void setPause( void );
extern void setResume( void );
extern char * intToString( int integer );

/*********************************************************************************************************
      END FILE
*********************************************************************************************************/

/*
 * SinglePlayer.h
 *
 *  Created on: Mar 10, 2016
 *      Author: user
 */

#ifndef SRC_SINGLEPLAYER_H_
#define SRC_SINGLEPLAYER_H_

class SinglePlayer {
private:
	void startTurn();
	void drawStep();
	void castingPhase();
	void combatPhase();
	void endTurn();
public:
	SinglePlayer();
	virtual ~SinglePlayer();
	void start();
	void end();
};

#endif /* SRC_SINGLEPLAYER_H_ */

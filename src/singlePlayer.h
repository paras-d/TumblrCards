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
	void start_turn();
	void draw_step();
	void casting_phase();
	void combat_phase();
	void end_turn();
public:
	SinglePlayer();
	virtual ~SinglePlayer();
	void start();
	void end();
};

#endif /* SRC_SINGLEPLAYER_H_ */

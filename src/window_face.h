/*
 * This file is part of EasyRPG Player.
 *
 * EasyRPG Player is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EasyRPG Player is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _WINDOW_FACE_H_
#define _WINDOW_FACE_H_

// Headers
#include <string>
#include "window_base.h"

/**
 * Window Face Class.
 */
class Window_Face :	public Window_Base {
public:
	/**
	 * Constructor.
	 */
	Window_Face(int ix, int iy, int iwidth, int iheight);

	/**
	 * Destructor.
	 */
	~Window_Face();

	/**
	 * Renders the current face on the window.
	 */
	void Refresh();

	void Set(int actor_id);

protected:
	int actor_id;
};

#endif

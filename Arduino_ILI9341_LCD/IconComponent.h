/*
ILI9341 LCD Display controller for Arduino_Pedelec_Controller

Copyright (C) 2016
Andreas Butti, andreas.b242 at gmail dot com

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software Foundation,
Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
*/

#pragma once

#include "BaseComponent.h"

/**
 * Display a text with value on the display
 */

class IconComponent: public BaseComponent, public DataListener {
  // Constructor / Destructor
public:
  //! Constructor
  IconComponent();

  //! Destructor
  virtual ~IconComponent();

  // public API
public:
  //! Return the height in pixel
  virtual uint8_t getHeight();

  //! Draw the component to the display
  virtual void draw();

private:
  //! Draw Bluetooth Icon
  void drawBluetooth(bool clearScreen);

  //! Draw Brakes Icon
  void drawBrakes(bool clearScreen);

  //! Draw Light Icon
  void drawLight(bool clearScreen);

//! DataListener
public:
  //! Icon changed
  virtual void onIconUpdate(uint8_t iconId);

  // Member
private:
};

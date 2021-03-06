
/*
 * Copyright 2011,2012 Evgeniy Khilkevitch 
 * 
 * This file is part of scigraphics.
 * 
 * Scigraphics is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Scigraphics is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with scigraphics.  If not, see <http://www.gnu.org/licenses/>.
 */


// ============================================================

#include "scigraphics/floatrect.h"
#include "scigraphics/painter.h"
#include "scigraphics/textstyle.h"
#include "scigraphics/brushstyle.h"

// ============================================================
     
unsigned scigraphics::floatRectangle::textHeight( painter &Painter, const std::string &Text, const textStyle &Style )
{ 
  return Painter.textHeight( Text, Style ); 
}

// ------------------------------------------------------------

void scigraphics::floatRectangle::drawBackground( painter &Painter ) const
{      
  brushStyle BackgroundBrush( color::White );
  Painter.drawRectangleW( Rectangle, BackgroundBrush, getBorderStyle() );
}

// ============================================================


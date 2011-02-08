/* iphoneCell.h - iPhone generic cell
 *
 * LICENSE:
 *
 *   Copyright 2009 Avi R.
 *
 *   This file is part of RoadMap.
 *
 *   RoadMap is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   RoadMap is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with RoadMap; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __IPHONECELL__H
#define __IPHONECELL__H


@interface iphoneCell : UITableViewCell {
	UILabel *rightLabel;
	UILabel *leftLabel;
   BOOL enableCell;
}

@property (nonatomic, retain) UILabel *rightLabel;
@property (nonatomic, retain) UILabel *leftLabel;
@property (nonatomic) BOOL enableCell;

@end

#endif // __IPHONECELL__H
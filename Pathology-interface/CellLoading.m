//
//  CellLoading.m
//  Pathology-interface
//
//  Created by Liangjun Jiang on 7/7/11.
//  Copyright 2011 Harvard University Extension School. All rights reserved.
//

#import "CellLoading.h"


@implementation AQGridViewCell (CellLoading)

+ (id)cell;
{
	NSArray *objs = [[NSBundle mainBundle] loadNibNamed:NSStringFromClass([self class])
												  owner:self 
												options:nil];
	for (AQGridViewCell *cell in objs) {
		for (UIView *subview in cell.subviews) {
			[cell.contentView addSubview:subview];
		}
		cell.backgroundColor = [UIColor clearColor];
		cell.contentView.backgroundColor = [UIColor clearColor];
		cell.selectionGlowColor = [UIColor colorWithRed:0.2 green:0.3 blue:0.8 alpha:1.0];
		return cell;
	}
	
	return nil;
}


@end

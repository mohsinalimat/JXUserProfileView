//
//  JXCategoryBaseCell.h
//  UI系列测试
//
//  Created by jiaxin on 2018/3/15.
//  Copyright © 2018年 jiaxin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JXCategoryBaseCellModel.h"

@interface JXCategoryBaseCell : UICollectionViewCell

- (void)initializeViews;

- (void)reloadDatas:(JXCategoryBaseCellModel *)cellModel;

@end

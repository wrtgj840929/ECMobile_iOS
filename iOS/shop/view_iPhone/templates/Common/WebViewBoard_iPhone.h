/*
 *                                                                          
 *       _/_/_/                      _/        _/_/_/_/_/                     
 *    _/          _/_/      _/_/    _/  _/          _/      _/_/      _/_/    
 *   _/  _/_/  _/_/_/_/  _/_/_/_/  _/_/          _/      _/    _/  _/    _/   
 *  _/    _/  _/        _/        _/  _/      _/        _/    _/  _/    _/    
 *   _/_/_/    _/_/_/    _/_/_/  _/    _/  _/_/_/_/_/    _/_/      _/_/       
 *                                                                          
 *
 *  Copyright 2013-2014, Geek Zoo Studio
 *  http://www.ecmobile.cn/license.html
 *
 *  HQ China:
 *    2319 Est.Tower Van Palace 
 *    No.2 Guandongdian South Street 
 *    Beijing , China
 *
 *  U.S. Office:
 *    One Park Place, Elmira College, NY, 14901, USA
 *
 *  QQ Group:   329673575
 *  BBS:        bbs.ecmobile.cn
 *  Fax:        +86-10-6561-5510
 *  Mail:       info@geek-zoo.com
 */

#import "Bee.h"

@interface WebViewBoard_iPhone : BeeUIBoard<UIWebViewDelegate>

@property (nonatomic, assign) BOOL				showLoading;
@property (nonatomic, retain) UIToolbar *		toolbar;
@property (nonatomic, retain) BeeUIWebView *	webView;
@property (nonatomic, copy) NSString *			urlString;
@property (nonatomic, copy) NSString *          htmlString;
@property (nonatomic, copy) NSString *			defaultTitle;

@property (nonatomic, assign) BOOL              isToolbarHiden;

- (void)refresh;

ON_SIGNAL2( BeeUIBoard, signal );

@end
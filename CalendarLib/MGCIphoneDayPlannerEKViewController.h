//
//  MGCIphoneDayPlannerEKViewController.h
//  Calendar
//
//  Created by Mihai Chifor on 12/2/15.
//  Copyright © 2015 Julien Martin. All rights reserved.
//

#import <EventKit/EventKit.h>
#import "MGCDayPlannerViewController.h"

@interface MGCIphoneDayPlannerEKViewController : MGCDayPlannerViewController

@property (nonatomic) NSCalendar *calendar;
@property (nonatomic) NSSet *visibleCalendars;
@property (nonatomic) EKEventStore *eventStore;

/** designated initializer */
- (instancetype)initWithEventStore:(EKEventStore*)eventStore;
- (void)accessGrantedForCalendar;
- (void)accessDeniedForCalendar;
- (void)reloadEvents;

@end

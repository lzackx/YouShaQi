// See http://iphonedevwiki.net/index.php/Logos

#import <UIKit/UIKit.h>

@interface CustomViewController

@property (nonatomic, copy) NSString* newProperty;

+ (void)classMethod;

- (NSString*)getMyName;

- (void)newMethod:(NSString*) output;

@end

%hook CustomViewController

+ (void)classMethod
{
	%log;

	%orig;
}

%new
-(void)newMethod:(NSString*) output{
    NSLog(@"This is a new method : %@", output);
}

%new
- (id)newProperty {
    return objc_getAssociatedObject(self, @selector(newProperty));
}

%new
- (void)setNewProperty:(id)value {
    objc_setAssociatedObject(self, @selector(newProperty), value, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (NSString*)getMyName
{
	%log;
    
    NSString* password = MSHookIvar<NSString*>(self,"_password");
    
    NSLog(@"password:%@", password);
    
    [%c(CustomViewController) classMethod];
    
    [self newMethod:@"output"];
    
    self.newProperty = @"newProperty";
    
    NSLog(@"newProperty : %@", self.newProperty);

	return %orig();
}

%end

%hook __NSCFString

- (void)replaceCharactersInRange:(NSRange)range withString:(NSString *)aString {
    
//    NSLog(@"location: %lu, length: %lu", range.location, range.length);
//    NSLog(@"aString: %@, length: %lu", aString, aString.length);
//    NSLog(@"aString location: %lu, length: %lu", NSRangeFromString(aString).location, NSRangeFromString(aString).length);
    if (range.length > aString.length ) {
        range.length = aString.length;
        %orig(range, aString);
        return;
    }
    %orig;
}

%end

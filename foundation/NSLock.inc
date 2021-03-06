{ Parsed from Foundation.framework (iPhoneOS8.2) NSLock.h }
{ Created on Fri Mar 20 2:11:39 2015 }


{$ifdef TYPES}
type
  NSLockPtr = ^NSLock;
  NSConditionLockPtr = ^NSConditionLock;
  NSRecursiveLockPtr = ^NSRecursiveLock;
  NSConditionPtr = ^NSCondition;
  NSLockingProtocolPtr = ^NSLockingProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  NSLockingProtocol = objcprotocol external name 'NSLocking'
    procedure lock; message 'lock';
    procedure unlock; message 'unlock';
  end;
{$endif}

{$ifdef CLASSES}

type
  NSLock = objcclass external (NSObject, NSLockingProtocol)
  private
    _priv: pointer;
  public
    function tryLock: boolean; message 'tryLock';
    function lockBeforeDate (limit: NSDate): boolean; message 'lockBeforeDate:';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';

    { Adopted protocols }
    procedure lock; message 'lock';
    procedure unlock; message 'unlock';
  end;

type
  NSConditionLock = objcclass external (NSObject, NSLockingProtocol)
  private
    _priv: pointer;
  public
    function initWithCondition (condition: NSInteger): instancetype; message 'initWithCondition:'; { NS_DESIGNATED_INITIALIZER }
    function condition: NSInteger; message 'condition';
    procedure lockWhenCondition (condition_: NSInteger); message 'lockWhenCondition:';
    function tryLock: boolean; message 'tryLock';
    function tryLockWhenCondition (condition_: NSInteger): boolean; message 'tryLockWhenCondition:';
    procedure unlockWithCondition (condition_: NSInteger); message 'unlockWithCondition:';
    function lockBeforeDate (limit: NSDate): boolean; message 'lockBeforeDate:';
    function lockWhenCondition_beforeDate (condition_: NSInteger; limit: NSDate): boolean; message 'lockWhenCondition:beforeDate:';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';

    { Adopted protocols }
    procedure lock; message 'lock';
    procedure unlock; message 'unlock';
  end;

type
  NSRecursiveLock = objcclass external (NSObject, NSLockingProtocol)
  private
    _priv: pointer;
  public
    function tryLock: boolean; message 'tryLock';
    function lockBeforeDate (limit: NSDate): boolean; message 'lockBeforeDate:';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';

    { Adopted protocols }
    procedure lock; message 'lock';
    procedure unlock; message 'unlock';
  end;

type
  NSCondition = objcclass external (NSObject, NSLockingProtocol)
  private
    _priv: pointer;
  public
    procedure wait; message 'wait';
    function waitUntilDate (limit: NSDate): boolean; message 'waitUntilDate:';
    procedure signal; message 'signal';
    procedure broadcast; message 'broadcast';
    procedure setName(newValue: NSString); message 'setName:';
    function name: NSString; message 'name';

    { Adopted protocols }
    procedure lock; message 'lock';
    procedure unlock; message 'unlock';
  end;
{$endif}


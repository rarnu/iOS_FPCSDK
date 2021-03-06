{ Parsed from SceneKit.framework (iPhoneOS8.2) SCNSceneRenderer.h }
{ Created on Fri Mar 20 2:11:17 2015 }


{$ifdef TYPES}
type
  SCNHitTestResultPtr = ^SCNHitTestResult;
  SCNSceneRendererProtocolPtr = ^SCNSceneRendererProtocol;
  SCNSceneRendererDelegateProtocolPtr = ^SCNSceneRendererDelegateProtocol;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  SCNHitTestFirstFoundOnlyKey: NSString; cvar; external;
  SCNHitTestSortResultsKey: NSString; cvar; external;
  SCNHitTestClipToZRangeKey: NSString; cvar; external;
  SCNHitTestBackFaceCullingKey: NSString; cvar; external;
  SCNHitTestBoundingBoxOnlyKey: NSString; cvar; external;
  SCNHitTestIgnoreChildNodesKey: NSString; cvar; external;
  SCNHitTestRootNodeKey: NSString; cvar; external;
  SCNHitTestIgnoreHiddenNodesKey: NSString { available in 10_9, 8_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  SCNHitTestResult = objcclass external (NSObject)
  private
    _reserved: id;
  public
    function node: SCNNode; message 'node';
    function geometryIndex: NSInteger; message 'geometryIndex';
    function faceIndex: NSInteger; message 'faceIndex';
    function localCoordinates: SCNVector3; message 'localCoordinates';
    function worldCoordinates: SCNVector3; message 'worldCoordinates';
    function localNormal: SCNVector3; message 'localNormal';
    function worldNormal: SCNVector3; message 'worldNormal';
    function modelTransform: SCNMatrix4; message 'modelTransform';
    function textureCoordinatesWithMappingChannel (channel: NSInteger): CGPoint; message 'textureCoordinatesWithMappingChannel:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNSceneRendererProtocol = objcprotocol external name 'SCNSceneRenderer' (NSObjectProtocol)
  required
    procedure setScene(newValue: SCNScene); message 'setScene:';
    function scene: SCNScene; message 'scene';
    procedure setSceneTime(newValue: NSTimeInterval); message 'setSceneTime:';
    function sceneTime: NSTimeInterval; message 'sceneTime';
    procedure setDelegate(newValue: SCNSceneRendererDelegateProtocol); message 'setDelegate:';
    function delegate: SCNSceneRendererDelegateProtocol; message 'delegate';
    function hitTest_options (thePoint: CGPoint; options: NSDictionary): NSArray; message 'hitTest:options:';
    function isNodeInsideFrustum_withPointOfView (node: SCNNode; pointOfView: SCNNode): boolean; message 'isNodeInsideFrustum:withPointOfView:'; { available in 10_9, 8_0 }
    function projectPoint (point: SCNVector3): SCNVector3; message 'projectPoint:'; { available in 10_9, 8_0 }
    function unprojectPoint (point: SCNVector3): SCNVector3; message 'unprojectPoint:'; { available in 10_9, 8_0 }
    procedure setPlaying(newValue: boolean); message 'setPlaying:';
    function isPlaying: boolean; message 'isPlaying';
    procedure setLoops(newValue: boolean); message 'setLoops:';
    function loops: boolean; message 'loops';
    procedure setPointOfView(newValue: SCNNode); message 'setPointOfView:';
    function pointOfView: SCNNode; message 'pointOfView';
    procedure setAutoenablesDefaultLighting(newValue: boolean); message 'setAutoenablesDefaultLighting:';
    function autoenablesDefaultLighting: boolean; message 'autoenablesDefaultLighting';
    procedure setJitteringEnabled(newValue: boolean); message 'setJitteringEnabled:';
    function isJitteringEnabled: boolean; message 'isJitteringEnabled';
    function prepareObject_shouldAbortBlock (object_: id; block: OpaqueCBlock): boolean; message 'prepareObject:shouldAbortBlock:'; { available in 10_9, 8_0 }
    procedure prepareObjects_withCompletionHandler (objects: NSArray; completionHandler: OpaqueCBlock); message 'prepareObjects:withCompletionHandler:'; { available in 10_10, 8_0 }
    procedure setShowsStatistics(newValue: boolean); message 'setShowsStatistics:';
    function showsStatistics: boolean; message 'showsStatistics';
    procedure setOverlaySKScene(newValue: SKScene); message 'setOverlaySKScene:';
    function overlaySKScene: SKScene; message 'overlaySKScene';
    function context: pointer; message 'context';
  end;

type
  SCNSceneRendererDelegateProtocol = objcprotocol external name 'SCNSceneRendererDelegate' (NSObjectProtocol)
  optional
    procedure renderer_updateAtTime (aRenderer: SCNSceneRendererProtocol; time: NSTimeInterval); message 'renderer:updateAtTime:'; { available in 10_10, 8_0 }
    procedure renderer_didApplyAnimationsAtTime (aRenderer: SCNSceneRendererProtocol; time: NSTimeInterval); message 'renderer:didApplyAnimationsAtTime:'; { available in 10_10, 8_0 }
    procedure renderer_didSimulatePhysicsAtTime (aRenderer: SCNSceneRendererProtocol; time: NSTimeInterval); message 'renderer:didSimulatePhysicsAtTime:'; { available in 10_10, 8_0 }
    procedure renderer_willRenderScene_atTime (aRenderer: SCNSceneRendererProtocol; scene: SCNScene; time: NSTimeInterval); message 'renderer:willRenderScene:atTime:';
    procedure renderer_didRenderScene_atTime (aRenderer: SCNSceneRendererProtocol; scene: SCNScene; time: NSTimeInterval); message 'renderer:didRenderScene:atTime:';
  end;
{$endif}


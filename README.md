# IOS-GAME-SDK

### 引入MobiExchanger.framework

### 依赖库
> * `UnityAds.framework`


### 头文件
> * 由引入`#import<UnityAds/UnityAds.h>`改为`#import<MobiExchanger/MobiExchanger.h>`

### 初始化
> * 由`[UnityAds initialize:gameId delegate:self testMode:self.testMode];`
> * 改为`[MEXPublic initialize:gameId delegate:self testMode:self.testMode];`
> * 由`[UnityAds initialize:gameId delegate:self];`
> * 改为`[MEXPublic initialize:gameId delegate:self];`

### show方法
> * 由`[UnityAds show:self placementId:self.interstitialPlacementId];`
> * 改为`[MEXPublic show:self placementId:self.interstitialPlacementId];`

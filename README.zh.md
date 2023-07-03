## idTech4A++ (Harmattan Edition)
#### DIII4A++, com.n0n3m4.diii4a, DOOM III/Quake 4/Prey(2006) for Android, 毁灭战士3/雷神之锤4/掠食(2006)安卓移植版
**最新版本:**
1.1.0harmattan32(natasha)  
**最新更新日期:**
2023-06-30  
**架构支持:**
arm64 armv7-a  
**平台:**
Android 4.0+  
**许可证:**
GPLv3

[<img src="https://fdroid.gitlab.io/artwork/badge/get-it-on.png"
alt="Get it on F-Droid"
height="80">](https://f-droid.org/packages/com.karin.idTech4Amm/)

或者在[Releases Section](https://github.com/glKarin/com.n0n3m4.diii4a/releases/latest)下载最新的APK.
标签以`-free`结尾的仅为了F-Droid更新.

| 功能支持 | Github | F-Droid |
|:-|:-:|:-:|
| Ouya TV | 是 | 否 |

----------------------------------------------------------------------------------
### 更新

* 添加 `中文`, `俄语`(by [ALord7](https://4pda.ru/forum/index.php?showuser=5043340)).
* 一些虚拟按键设置移植`Configure on-screen controls`页面.
* 毁灭战士3新增`full-body awareness` mod. 通过设置cvar`harm_pm_fullBodyAwareness`为1开启, 并且可以使用cvar `harm_pm_fullBodyAwarenessOffset`来设置偏移.
* 在选项卡`General`下的`GameLib`支持添加外部的游戏动态库(测试. 由于系统安全方案不确定是否对所有设备/安卓版本有效. 允许你通过DIII4A项目编译你自己的游戏mod动态库(armv7/armv8)然后运行在原版的idTech4A++).
* 如果启用`Find game library in game data directory`, 则支持加载外部的位于`Game working directory`/`fs_game`文件夹下的游戏动态库来代替apk内置的游戏动态库(测试. 由于系统安全方案不确定是否对所有设备/安卓版本有效. 允许你通过DIII4A项目编译你自己的游戏mod动态库(armv7/armv8), 然后命名为`gameaarch64.so`或`libgameaarch64.so`(arm64设备)或命名为`gamearm.so`或`libgamearm.so`(arm32设备), 然后放入`Game working directory`/`fs_game`文件夹下, 将优先加载该mod文件夹下的游戏动态库).
* 支持jpg/png图像纹理文件.

----------------------------------------------------------------------------------

#### 关于掠食(2006)
###### 运行掠食(2006)([jmarshall](https://github.com/jmarshall23) 's [PreyDoom](https://github.com/jmarshall23/PreyDoom)). 目前可以运行全部关卡, 部分关卡存在bug.
> 1. 将PC端掠食(2006)游戏文件放到`preybase`文件夹, 然后直接启动游戏.
> 2. 已知问题的解决方案: 例如. 使用cvar `harm_g_translateAlienFont`自动翻译GUI中的外星人文字.
> 3. 已知bugs: 例如一些错误的碰撞检测(使用`noclip`), 部分菜单的渲染, 部分GUI不工作(RoadHouse的CD播放器).
> 4. 由于选项卡窗口UI组件暂不支持, 导致设置页面不工作, 必须通过编辑`preyconfig.cfg`来绑定额外按键.
> > * bind "幽灵行走按键" "_impulse54"
> > * bind "武器第2攻击键" "_attackAlt"
> > * bind "打火机开关键" "_impulse16"
> > * bind "扔物体键" "_impulse25"

----------------------------------------------------------------------------------

#### 关于雷神之锤4
###### 运行雷神之锤4([jmarshall](https://github.com/jmarshall23) 's [Quake4Doom](https://github.com/jmarshall23/Quake4Doom)). 目前可以运行全部关卡, 部分关卡存在bug.  
> 1. 将PC端雷神之锤4游戏文件放到`q4base`文件夹, 然后直接启动游戏.
> 2. 建议先解压雷神之锤4补丁资源到`q4base`资源目录(在菜单`Other` -> `Extract resource`).
> - 毁灭战士3格式的雷神之锤4字体, [IlDucci](https://github.com/IlDucci)提供.
> - 雷神之锤3bot文件(在多人游戏中, 进入游戏后在控制台使用命令`addbot <bot_file>`或`fillbots`添加bot, 或者设置`harm_si_autoFillBots`为1自动添加bot).
> - `SABot`多人游戏地图的aas文件(多人游戏的bot寻径).

###### 问题和解决方案:    
> 1. ~~门打不开~~: 碰撞问题已经修复, 例如触发器, 载具, AI, 电梯, 血站, 所有门都可正常打开.
> 2. *主菜单*: 目前可以正常显示, 包括多人游戏菜单, 去掉背景色. 可能存在部分GUI交互有问题.
> 3. ~~声音~~: 正常工作.
> 4. ~~游戏载入界面~~: 正常工作.
> 5. *多人游戏*: 目前正常工作, 并且可以添加bot(`jmarshall`添加了雷神之锤3的bot支持, 但是需要先添加bot文件和多人游戏地图的AAS文件, 目前可以设置`harm_g_autoGenAASFileInMPGame`为1自动在多人游戏地图载入(如果没有一个有效的该地图的AAS文件)后生成一个不怎么好的AAS文件, 也可以把你自己用其他方式生成的AAS文件放到游戏数据目录的`maps/mp`文件夹).
> 6. *脚本错误*: 部分地图存在脚本错误, 虽然不会使程序崩溃, 但是可能会影响游戏进程.
> 7. *粒子系统*: 目前工作的不完整(雷神之锤4使用了新的更高级的粒子系统`BSE`, 非开源, `jmarshall`通过反编译`深入敌后: 雷神战争`的BSE二进制实现了, 更多详情 [jmarshall23/Quake4BSE](https://github.com/jmarshall23/Quake4BSE)), 但是至今不工作. 现在实现了一个基于毁灭战士3的粒子特效系统的开源BSE, 可以渲染一些, 但是效果不是很理想.
> 8. *物体渲染*: 存在一些物体错误的渲染结果.
> 9. ~~碰撞~~: 碰撞问题已经修复.

----------------------------------------------------------------------------------
### 截图
> 游戏

<img src="https://github.com/glKarin/com.n0n3m4.diii4a/raw/package/screenshot/Screenshot_doom3_bathroom.png" alt="Classic bathroom">
<img src="https://github.com/glKarin/com.n0n3m4.diii4a/raw/package/screenshot/Screenshot_bathroom_jill_stars.png" alt="Classic bathroom in Rivensin mod">
<img src="https://github.com/glKarin/com.n0n3m4.diii4a/raw/package/screenshot/Screenshot_quake4_game_2.png" alt="Quake IV on DOOM3">
<img src="https://github.com/glKarin/com.n0n3m4.diii4a/raw/package/screenshot/Screenshot_prey_girlfriend.png" alt="Prey(2006) on DOOM3">

> Mod

<img src="https://github.com/glKarin/com.n0n3m4.diii4a/raw/package/screenshot/Screenshot_doom3_roe.png" width="50%" alt="Resurrection of Evil"><img src="https://github.com/glKarin/com.n0n3m4.diii4a/raw/package/screenshot/Screenshot_doom3_the_lost_mission.png" width="50%" alt="The lost mission">
<img src="https://github.com/glKarin/com.n0n3m4.diii4a/raw/package/screenshot/Screenshot_classic_doom3.png" width="50%" alt="Classic DOOM"><img src="https://github.com/glKarin/com.n0n3m4.diii4a/raw/package/screenshot/Screenshot_doom3_hardcorps.png" width="50%" alt="Hardcorps">
<img src="https://github.com/glKarin/com.n0n3m4.diii4a/raw/package/screenshot/Screenshot_doom3_rivensin.png" width="50%" alt="Rivensin"><img src="https://github.com/glKarin/com.n0n3m4.diii4a/raw/package/screenshot/Screenshot_quake4.png" width="50%" alt="Quake IV">
<img src="https://github.com/glKarin/com.n0n3m4.diii4a/raw/package/screenshot/Screenshot_prey.png" width="50%" alt="Prey(2006)">

----------------------------------------------------------------------------------

### 更新:

[更新日志](CHANGES.zh.md ':include')

----------------------------------------------------------------------------------

### 移植:

#### 如果想要移植`雷神之锤4`和`掠食(2006)`到同基于开源版本的`毁灭战士3`源码的PC端或其他平台, 由于DIII4A基于安卓平台和OpenGL ES2.0, 所以和原始的代码有些区别. 但是我把所有修改都用宏在源码上做了标记作为补丁, 但即使这样也要搜索这些宏和手动应用这些补丁.
#### 为了保持原毁灭战士3的源码结构, 对于全部新增加的源码文件, 我放在了外面的新文件夹中, 并且在这些新文件夹内保持和毁灭战士3一样的目录结构(例如. framework, renderer, idlib...).

#### 雷神之锤4
##### `_RAVEN`, `_QUAKE4`是补丁宏, 在`DIII4A`源码中查找.
##### 所有新源码放置在`raven`文件夹.
> 1. _RAVEN: 编译`core引擎 (毁灭战士3的源码)`和`idlib (毁灭战士3的源码)`.
> 2. _QUAKE4: 编译`游戏 (雷神之锤4的SDK源码)`库.
> 3. 构建core引擎: 声明宏`_RAVEN`, `_RAVEN_FX(如果需要OpenBSE, 非必须)`
> 4. 构建游戏库: 声明宏`_RAVEN`, `_QUAKE4`
##### 关于`BSE`
由于`BSE`没开源, 所有我默认使用了一个什么都不做的空实现和一个不完整的但可以工作的基于毁灭战士3原来的Particle/Fx粒子特效系统的实现(使用宏`_RAVEN_FX`标记).
##### 关于`BOT`
bot不是必要的, 而是`jmarshall`额外添加的.

#### 掠食(2006)
##### `_HUMANHEAD`, `_PREY`是补丁宏, 在`DIII4A`源码中查找.
##### 所有新源码放置在`humanhead`文件夹.
> 1. _HUMANHEAD: 编译`core引擎(毁灭战士3的源码)`和`idlib (毁灭战士3的源码)`.
> 2. _PREY: 编译`游戏 (掠食(2006)的SDK源码)`库.
> 3. 构建core引擎: 声明宏`_HUMANHEAD`
> 4. 构建游戏库: 声明宏`_HUMANHEAD`, `_PREY`, 和原来SDK的宏`HUMANHEAD`

----------------------------------------------------------------------------------

### 关于:

* 源码在apk里的`assets/source`目录下.
	
----------------------------------------------------------------------------------

### 分支:

> `master`:
> * /DIII4A: 前端启动器源码
> * /doom3: 游戏源码

> `free`:
> * F-Droid自由版本.

> `package`:
> * /*.apk: 所有构建
> * /screenshot: 截图
> * /source: 引用的源码
> * /pak: 游戏资源
> * /CHECK_FOR_UPDATE.json: 检查更新的配置JSON

> `n0n3m4_original_old_version`:
> * 原来旧的`n0n3m4`的版本.

----------------------------------------------------------------------------------
### 其他下载方式:

* [Google: https://drive.google.com/drive/folders/1qgFWFGICKjcQ5KfhiNBHn_JYhJN5XoLb](https://drive.google.com/drive/folders/1qgFWFGICKjcQ5KfhiNBHn_JYhJN5XoLb)
* [Baidu网盘: https://pan.baidu.com/s/1hXvKmrajAACfcCj9_ThZ_w](https://pan.baidu.com/s/1hXvKmrajAACfcCj9_ThZ_w) 提取码: `pyyj`
* [Baidu贴吧: BEYONDK2000](https://tieba.baidu.com/p/6825594793)
* [F-Droid(不同的签名)](https://f-droid.org/packages/com.karin.idTech4Amm/)
----------------------------------------------------------------------------------
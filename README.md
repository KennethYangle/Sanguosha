# 三国杀（C++练习项目）

## 使用说明
### 一、安装
#### 1、安装protobuf
参考 [https://github.com/protocolbuffers/protobuf/blob/master/src/README.md](https://github.com/protocolbuffers/protobuf/blob/master/src/README.md)

简述：
* 下载 protobuf-cpp-[VERSION].tar.gz
* 安装依赖
    ```
    sudo apt-get install autoconf automake libtool curl make g++ unzip
    ```
* 编译
    ```
    ./configure
    make
    make check
    sudo make install
    sudo ldconfig # refresh shared library cache.
    ```
* 测试
    ```
    protoc --version
    ```

## 设计思路
分为武将（技能），牌，流程。
最开始以为武将和技能最重要，后来发现一切调用的逻辑都是流程决定的。

### 一、流程
流程用状态模式+栈

流程包括游戏流程、回合流程、卡牌流程、技能流程、濒死流程、死亡流程。考虑创建流程工厂。

每一流程有若干状态，但全局同一时刻只会位于一个状态上。切换到其他流程时当前流程入栈，处理完或退出后弹出上一流程。
#### 1、游戏流程
选将 -> 洗牌 -> 发牌 （游戏开始时摸牌技能：巨贾） -> 1号位开始逆时针询问游戏开始时技能（先辅、各种标记）

#### 2、回合流程
三国杀中一个武将的每一个回合都分6 个阶段：回合开始阶段，判定阶段，摸牌阶段，出牌阶段，弃牌阶段，回合结束阶段。

回合开始阶段 -> 判定阶段 -> 摸牌阶段 -> 出牌阶段 -> 弃牌阶段 -> 回合结束阶段
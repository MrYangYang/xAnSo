### Android So文件浏览修复工具

相较于原GIT仓库
1.修改了e_machine的验证，不以编译的target平台为验证值，方便在win/mac上修复arm的so
2.增加了CMake编译构建方式，可以从CMake快速切换到XCode/CLion/VS等IDE上

#### 项目为什么选择C++
* 一开始整个项目是用Python写的， 考虑到Python上有很多成熟的库可以直接使用，代码写起来会比较方便，但是真的开始往下写的时候发现，光是各种类型定义就要耗费很多的精力，并且很多逻辑就是从Android的源码中进行代码精简来的， 这个时候直接借鉴Android源码比再翻译成Python要快得多

#### 项目原则
* 代码风格尽量遵循google style代码风格
* Android系统源码中可以借鉴的代码，尽量直接借鉴
* Core中核心代码要做到平台无关性

#### So文件浏览
* 显示Elf 头
* 显示Program 头
* 显示Section头

#### So文件修复
* 完全无Section信息修复

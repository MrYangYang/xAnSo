### Android So文件修复工具

相较于原GIT仓库

1. 修改了e_machine的验证，不以编译的target平台为验证值，方便在win/mac上修复arm的so
2. 增加了CMake编译构建方式，可以从CMake快速切换到XCode/CLion/VS等IDE上
3. 去除了python脚本，工程只关注修复so本身

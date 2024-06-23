import sys
import os
from pylibrary.function import *
def create(second_part):
    # 创建任务的逻辑
    pass

def is_all_whitespace(input_string):
    # 检查字符串是否只包含空白字符
    return all(char.isspace() for char in input_string)

# 主程序开始
def main():
    os.system('chcp 65001 && cls')
    os.system('title Task Manager')
    print("Task Manager [Version 1.0.0]\n(c) github Huang Wenzhuo, Wang Xin, Wu Zijie. All rights reserved.\n")
    actionMap = {
        'exit': exit_,
        'version': version,
        'war': war
        # 可以添加更多动作
    }

    actionMapString = {
        'create': create
    }

    while True:
        try:
            input_cmd = input(f"{os.getlogin()}> ")
            if input_cmd.strip() == '':
                continue
            space_pos = input_cmd.find(' ')
            first_part = second_part = ' '
            
            if space_pos != -1:
                first_part = input_cmd[:space_pos].strip()
                second_part = input_cmd[space_pos + 1:].strip()
            else:
                first_part = input_cmd.strip()

            action = actionMap.get(first_part)
            if action:
                action()
            else:
                action_string = actionMapString.get(first_part)
                if action_string:
                    action_string(second_part)
                else:
                    print("未知动作")
        except EOFError:
            # 处理Ctrl+Z或Ctrl+D等结束输入的情况
            print("\n退出程序")
            break
        except KeyboardInterrupt:
            # 处理Ctrl+C中断
            print("\n程序被用户中断")
            break
        except Exception as e:
            # 其他异常处理
            print(f"发生错误：{e}")

if __name__ == "__main__":
    main()

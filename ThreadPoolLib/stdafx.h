// stdafx.h: ���������� ���� ��� ����������� ��������� ���������� ������
// ��� ���������� ������ ��� ����������� �������, ������� ����� ������������, ��
// �� ����� ����������
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // ��������� ����� ������������ ���������� �� ���������� Windows
#include "targetver.h"
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>
#include <vector>
#include <Windows.h>
#include <Shlwapi.h>
#include <functional>
#include <thread>
#include <queue>
#include <mutex>
#include <memory>
#include <condition_variable>
typedef std::function<void()> fn_type;
typedef void (*DLLFUNC)(LPVOID,LPVOID);
// TODO: ���������� ����� ������ �� �������������� ���������, ����������� ��� ���������
#include "Worker.h"
#include "ThreadPool.h"
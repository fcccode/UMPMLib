#include <Windows.h>
#include "PMemHelper.h"

void main()
{
	PMemHelper *mem = new PMemHelper();
	uint8_t buffer[255];
	auto cr3 = mem->GetDirBase(GetCurrentProcessId());
	auto base = mem->GetProcessBase(GetCurrentProcessId());
	mem->ReadVirtual(cr3, base, buffer, sizeof(buffer));
	

}
#include "Driver.h"

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
	/*UNREFERENCED_PARAMETER(DriverObject);*/
	UNREFERENCED_PARAMETER(RegistryPath);

	DbgPrintEx(0, 0, "\n[DriverHelloWorld] Driver load! - HelloWorld!");
	DriverObject->DriverUnload = DriverUnload;
	return STATUS_SUCCESS;
}

NTSTATUS DriverUnload(PDRIVER_OBJECT DriverObject)
{
	UNREFERENCED_PARAMETER(DriverObject);

	DbgPrintEx(0, 0, "\n[DriverHelloWorld] Driver unload! - ByeWorld!");
	return STATUS_SUCCESS;
}
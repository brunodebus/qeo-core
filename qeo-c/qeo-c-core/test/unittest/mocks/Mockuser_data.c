/*
 * Copyright (c) 2014 - Qeo LLC
 *
 * The source code form of this Qeo Open Source Project component is subject
 * to the terms of the Clear BSD license.
 *
 * You can redistribute it and/or modify it under the terms of the Clear BSD
 * License (http://directory.fsf.org/wiki/License:ClearBSD). See LICENSE file
 * for more details.
 *
 * The Qeo Open Source Project also includes third party Open Source Software.
 * See LICENSE file for more details.
 */

/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#define NO_TEST_ASSERT_EQUAL_MEMORY_MESSAGE
#include "unity.h"
#include "cmock.h"
#include "Mockuser_data.h"

typedef struct _CMOCK_reader_user_data_update_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  qeo_retcode_t ReturnVal;
  qeocore_reader_t* Expected_reader;

} CMOCK_reader_user_data_update_CALL_INSTANCE;

typedef struct _CMOCK_writer_user_data_update_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  qeo_retcode_t ReturnVal;
  qeocore_writer_t* Expected_writer;

} CMOCK_writer_user_data_update_CALL_INSTANCE;

static struct Mockuser_dataInstance
{
  int reader_user_data_update_IgnoreBool;
  qeo_retcode_t reader_user_data_update_FinalReturn;
  CMOCK_reader_user_data_update_CALLBACK reader_user_data_update_CallbackFunctionPointer;
  int reader_user_data_update_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE reader_user_data_update_CallInstance;
  int writer_user_data_update_IgnoreBool;
  qeo_retcode_t writer_user_data_update_FinalReturn;
  CMOCK_writer_user_data_update_CALLBACK writer_user_data_update_CallbackFunctionPointer;
  int writer_user_data_update_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE writer_user_data_update_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mockuser_data_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.reader_user_data_update_IgnoreBool)
    Mock.reader_user_data_update_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.reader_user_data_update_CallInstance, cmock_line, "Function 'reader_user_data_update' called less times than expected.");
  if (Mock.reader_user_data_update_CallbackFunctionPointer != NULL)
    Mock.reader_user_data_update_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.writer_user_data_update_IgnoreBool)
    Mock.writer_user_data_update_CallInstance = CMOCK_GUTS_NONE;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.writer_user_data_update_CallInstance, cmock_line, "Function 'writer_user_data_update' called less times than expected.");
  if (Mock.writer_user_data_update_CallbackFunctionPointer != NULL)
    Mock.writer_user_data_update_CallInstance = CMOCK_GUTS_NONE;
}

void Mockuser_data_Init(void)
{
  Mockuser_data_Destroy();
}

void Mockuser_data_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.reader_user_data_update_CallbackFunctionPointer = NULL;
  Mock.reader_user_data_update_CallbackCalls = 0;
  Mock.writer_user_data_update_CallbackFunctionPointer = NULL;
  Mock.writer_user_data_update_CallbackCalls = 0;
}

qeo_retcode_t reader_user_data_update(const qeocore_reader_t* reader)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_reader_user_data_update_CALL_INSTANCE* cmock_call_instance = (CMOCK_reader_user_data_update_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.reader_user_data_update_CallInstance);
  Mock.reader_user_data_update_CallInstance = CMock_Guts_MemNext(Mock.reader_user_data_update_CallInstance);
  if (Mock.reader_user_data_update_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.reader_user_data_update_FinalReturn;
    memcpy(&Mock.reader_user_data_update_FinalReturn, &cmock_call_instance->ReturnVal, sizeof(qeo_retcode_t));
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.reader_user_data_update_CallbackFunctionPointer != NULL)
  {
    return Mock.reader_user_data_update_CallbackFunctionPointer(reader, Mock.reader_user_data_update_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'reader_user_data_update' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_reader), (void*)(reader), sizeof(qeocore_reader_t), cmock_line, "Function 'reader_user_data_update' called with unexpected value for argument 'reader'.");
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_reader_user_data_update(CMOCK_reader_user_data_update_CALL_INSTANCE* cmock_call_instance, const qeocore_reader_t* reader)
{
  cmock_call_instance->Expected_reader = (qeocore_reader_t*)reader;
}

void reader_user_data_update_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_reader_user_data_update_CALL_INSTANCE));
  CMOCK_reader_user_data_update_CALL_INSTANCE* cmock_call_instance = (CMOCK_reader_user_data_update_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.reader_user_data_update_CallInstance = CMock_Guts_MemChain(Mock.reader_user_data_update_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.reader_user_data_update_IgnoreBool = (int)1;
}

void reader_user_data_update_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const qeocore_reader_t* reader, qeo_retcode_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_reader_user_data_update_CALL_INSTANCE));
  CMOCK_reader_user_data_update_CALL_INSTANCE* cmock_call_instance = (CMOCK_reader_user_data_update_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.reader_user_data_update_CallInstance = CMock_Guts_MemChain(Mock.reader_user_data_update_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_reader_user_data_update(cmock_call_instance, reader);
  memcpy(&cmock_call_instance->ReturnVal, &cmock_to_return, sizeof(qeo_retcode_t));
}

void reader_user_data_update_StubWithCallback(CMOCK_reader_user_data_update_CALLBACK Callback)
{
  Mock.reader_user_data_update_CallbackFunctionPointer = Callback;
}

qeo_retcode_t writer_user_data_update(const qeocore_writer_t* writer)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_writer_user_data_update_CALL_INSTANCE* cmock_call_instance = (CMOCK_writer_user_data_update_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.writer_user_data_update_CallInstance);
  Mock.writer_user_data_update_CallInstance = CMock_Guts_MemNext(Mock.writer_user_data_update_CallInstance);
  if (Mock.writer_user_data_update_IgnoreBool)
  {
    if (cmock_call_instance == NULL)
      return Mock.writer_user_data_update_FinalReturn;
    memcpy(&Mock.writer_user_data_update_FinalReturn, &cmock_call_instance->ReturnVal, sizeof(qeo_retcode_t));
    return cmock_call_instance->ReturnVal;
  }
  if (Mock.writer_user_data_update_CallbackFunctionPointer != NULL)
  {
    return Mock.writer_user_data_update_CallbackFunctionPointer(writer, Mock.writer_user_data_update_CallbackCalls++);
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'writer_user_data_update' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_writer), (void*)(writer), sizeof(qeocore_writer_t), cmock_line, "Function 'writer_user_data_update' called with unexpected value for argument 'writer'.");
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_writer_user_data_update(CMOCK_writer_user_data_update_CALL_INSTANCE* cmock_call_instance, const qeocore_writer_t* writer)
{
  cmock_call_instance->Expected_writer = (qeocore_writer_t*)writer;
}

void writer_user_data_update_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, qeo_retcode_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_writer_user_data_update_CALL_INSTANCE));
  CMOCK_writer_user_data_update_CALL_INSTANCE* cmock_call_instance = (CMOCK_writer_user_data_update_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.writer_user_data_update_CallInstance = CMock_Guts_MemChain(Mock.writer_user_data_update_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.writer_user_data_update_IgnoreBool = (int)1;
}

void writer_user_data_update_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const qeocore_writer_t* writer, qeo_retcode_t cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_writer_user_data_update_CALL_INSTANCE));
  CMOCK_writer_user_data_update_CALL_INSTANCE* cmock_call_instance = (CMOCK_writer_user_data_update_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.writer_user_data_update_CallInstance = CMock_Guts_MemChain(Mock.writer_user_data_update_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_writer_user_data_update(cmock_call_instance, writer);
  memcpy(&cmock_call_instance->ReturnVal, &cmock_to_return, sizeof(qeo_retcode_t));
}

void writer_user_data_update_StubWithCallback(CMOCK_writer_user_data_update_CALLBACK Callback)
{
  Mock.writer_user_data_update_CallbackFunctionPointer = Callback;
}


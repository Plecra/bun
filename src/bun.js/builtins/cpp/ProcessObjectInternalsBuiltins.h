/*
 * Copyright (c) 2015 Igalia
 * Copyright (c) 2015 Igalia S.L.
 * Copyright (c) 2015 Igalia.
 * Copyright (c) 2015, 2016 Canon Inc. All rights reserved.
 * Copyright (c) 2015, 2016, 2017 Canon Inc.
 * Copyright (c) 2016, 2020 Apple Inc. All rights reserved.
 * Copyright (c) 2022 Codeblog Corp. All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

// DO NOT EDIT THIS FILE. It is automatically generated from JavaScript files for
// builtins by the script: Source/JavaScriptCore/Scripts/generate-js-builtins.py

#pragma once

#include <JavaScriptCore/BuiltinUtils.h>
#include <JavaScriptCore/Identifier.h>
#include <JavaScriptCore/JSFunction.h>
#include <JavaScriptCore/UnlinkedFunctionExecutable.h>

namespace JSC {
class FunctionExecutable;
}

namespace WebCore {

/* ProcessObjectInternals */
extern const char* const s_processObjectInternalsBindingCode;
extern const int s_processObjectInternalsBindingCodeLength;
extern const JSC::ConstructAbility s_processObjectInternalsBindingCodeConstructAbility;
extern const JSC::ConstructorKind s_processObjectInternalsBindingCodeConstructorKind;
extern const JSC::ImplementationVisibility s_processObjectInternalsBindingCodeImplementationVisibility;
extern const char* const s_processObjectInternalsGetStdioWriteStreamCode;
extern const int s_processObjectInternalsGetStdioWriteStreamCodeLength;
extern const JSC::ConstructAbility s_processObjectInternalsGetStdioWriteStreamCodeConstructAbility;
extern const JSC::ConstructorKind s_processObjectInternalsGetStdioWriteStreamCodeConstructorKind;
extern const JSC::ImplementationVisibility s_processObjectInternalsGetStdioWriteStreamCodeImplementationVisibility;
extern const char* const s_processObjectInternalsGetStdinStreamCode;
extern const int s_processObjectInternalsGetStdinStreamCodeLength;
extern const JSC::ConstructAbility s_processObjectInternalsGetStdinStreamCodeConstructAbility;
extern const JSC::ConstructorKind s_processObjectInternalsGetStdinStreamCodeConstructorKind;
extern const JSC::ImplementationVisibility s_processObjectInternalsGetStdinStreamCodeImplementationVisibility;

#define WEBCORE_FOREACH_PROCESSOBJECTINTERNALS_BUILTIN_DATA(macro) \
    macro(binding, processObjectInternalsBinding, 1) \
    macro(getStdioWriteStream, processObjectInternalsGetStdioWriteStream, 2) \
    macro(getStdinStream, processObjectInternalsGetStdinStream, 3) \

#define WEBCORE_BUILTIN_PROCESSOBJECTINTERNALS_BINDING 1
#define WEBCORE_BUILTIN_PROCESSOBJECTINTERNALS_GETSTDIOWRITESTREAM 1
#define WEBCORE_BUILTIN_PROCESSOBJECTINTERNALS_GETSTDINSTREAM 1

#define WEBCORE_FOREACH_PROCESSOBJECTINTERNALS_BUILTIN_CODE(macro) \
    macro(processObjectInternalsBindingCode, binding, ASCIILiteral(), s_processObjectInternalsBindingCodeLength) \
    macro(processObjectInternalsGetStdioWriteStreamCode, getStdioWriteStream, ASCIILiteral(), s_processObjectInternalsGetStdioWriteStreamCodeLength) \
    macro(processObjectInternalsGetStdinStreamCode, getStdinStream, ASCIILiteral(), s_processObjectInternalsGetStdinStreamCodeLength) \

#define WEBCORE_FOREACH_PROCESSOBJECTINTERNALS_BUILTIN_FUNCTION_NAME(macro) \
    macro(binding) \
    macro(getStdinStream) \
    macro(getStdioWriteStream) \

#define DECLARE_BUILTIN_GENERATOR(codeName, functionName, overriddenName, argumentCount) \
    JSC::FunctionExecutable* codeName##Generator(JSC::VM&);

WEBCORE_FOREACH_PROCESSOBJECTINTERNALS_BUILTIN_CODE(DECLARE_BUILTIN_GENERATOR)
#undef DECLARE_BUILTIN_GENERATOR

class ProcessObjectInternalsBuiltinsWrapper : private JSC::WeakHandleOwner {
public:
    explicit ProcessObjectInternalsBuiltinsWrapper(JSC::VM& vm)
        : m_vm(vm)
        WEBCORE_FOREACH_PROCESSOBJECTINTERNALS_BUILTIN_FUNCTION_NAME(INITIALIZE_BUILTIN_NAMES)
#define INITIALIZE_BUILTIN_SOURCE_MEMBERS(name, functionName, overriddenName, length) , m_##name##Source(JSC::makeSource(StringImpl::createWithoutCopying(s_##name, length), { }))
        WEBCORE_FOREACH_PROCESSOBJECTINTERNALS_BUILTIN_CODE(INITIALIZE_BUILTIN_SOURCE_MEMBERS)
#undef INITIALIZE_BUILTIN_SOURCE_MEMBERS
    {
    }

#define EXPOSE_BUILTIN_EXECUTABLES(name, functionName, overriddenName, length) \
    JSC::UnlinkedFunctionExecutable* name##Executable(); \
    const JSC::SourceCode& name##Source() const { return m_##name##Source; }
    WEBCORE_FOREACH_PROCESSOBJECTINTERNALS_BUILTIN_CODE(EXPOSE_BUILTIN_EXECUTABLES)
#undef EXPOSE_BUILTIN_EXECUTABLES

    WEBCORE_FOREACH_PROCESSOBJECTINTERNALS_BUILTIN_FUNCTION_NAME(DECLARE_BUILTIN_IDENTIFIER_ACCESSOR)

    void exportNames();

private:
    JSC::VM& m_vm;

    WEBCORE_FOREACH_PROCESSOBJECTINTERNALS_BUILTIN_FUNCTION_NAME(DECLARE_BUILTIN_NAMES)

#define DECLARE_BUILTIN_SOURCE_MEMBERS(name, functionName, overriddenName, length) \
    JSC::SourceCode m_##name##Source;\
    JSC::Weak<JSC::UnlinkedFunctionExecutable> m_##name##Executable;
    WEBCORE_FOREACH_PROCESSOBJECTINTERNALS_BUILTIN_CODE(DECLARE_BUILTIN_SOURCE_MEMBERS)
#undef DECLARE_BUILTIN_SOURCE_MEMBERS

};

#define DEFINE_BUILTIN_EXECUTABLES(name, functionName, overriddenName, length) \
inline JSC::UnlinkedFunctionExecutable* ProcessObjectInternalsBuiltinsWrapper::name##Executable() \
{\
    if (!m_##name##Executable) {\
        JSC::Identifier executableName = functionName##PublicName();\
        if (overriddenName)\
            executableName = JSC::Identifier::fromString(m_vm, overriddenName);\
        m_##name##Executable = JSC::Weak<JSC::UnlinkedFunctionExecutable>(JSC::createBuiltinExecutable(m_vm, m_##name##Source, executableName, s_##name##ImplementationVisibility, s_##name##ConstructorKind, s_##name##ConstructAbility), this, &m_##name##Executable);\
    }\
    return m_##name##Executable.get();\
}
WEBCORE_FOREACH_PROCESSOBJECTINTERNALS_BUILTIN_CODE(DEFINE_BUILTIN_EXECUTABLES)
#undef DEFINE_BUILTIN_EXECUTABLES

inline void ProcessObjectInternalsBuiltinsWrapper::exportNames()
{
#define EXPORT_FUNCTION_NAME(name) m_vm.propertyNames->appendExternalName(name##PublicName(), name##PrivateName());
    WEBCORE_FOREACH_PROCESSOBJECTINTERNALS_BUILTIN_FUNCTION_NAME(EXPORT_FUNCTION_NAME)
#undef EXPORT_FUNCTION_NAME
}

} // namespace WebCore

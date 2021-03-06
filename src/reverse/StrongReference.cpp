#include <stdafx.h>

#include "StrongReference.h"

StrongReference::StrongReference(sol::state_view aView, StrongHandle aStrongHandle)
    : Type(aView, static_cast<RED4ext::CClass*>(aStrongHandle.handle->GetParentType()))
    , m_strongHandle(aStrongHandle)
{
}

StrongReference::~StrongReference()
{
    // Someday maybe actually free memory
}

RED4ext::IScriptable* StrongReference::GetHandle()
{
    return m_strongHandle.handle;
}

//
//  CAMetalLayer.hpp
//  
//
//  Created by Martin Boros on 3/25/22.
//

#pragma once


//-------------------------------------------------------------------------------------------------------------------------------------------------------------

#include "../Metal/MTLDevice.hpp"

#include "CADefines.hpp"
#include "CAPrivate.hpp"

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

namespace CA
{
class MetalLayer : public NS::Referencing<MetalLayer>
{
public:
    MTL::Device* device() const;
    class MetalDrawable* nextDrawable() const;
    NS::UInteger maximumDrawableCount() const;
};
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

_CA_INLINE MTL::Device* CA::MetalLayer::device() const
{
    return Object::sendMessage<MTL::Device*>(this, _MTL_PRIVATE_SEL(device));
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

_CA_INLINE CA::MetalDrawable* CA::MetalLayer::nextDrawable() const
{
    return Object::sendMessage<MetalDrawable*>(this, _MTL_PRIVATE_SEL(nextDrawable));
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

_CA_INLINE NS::UInteger CA::MetalLayer::maximumDrawableCount() const
{
    return Object::sendMessage<NS::UInteger>(this, _MTL_PRIVATE_SEL(maximumDrawableCount));
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1C293485F7CD4F10DD5FC0F8F1AA616F3A93746F 
{
};
struct Il2CppArrayBounds;

// Microsoft.MixedReality.FrozenWorld.Engine.Engine
struct Engine_t58A67BDAD3591C070773EC786C525881AEAE420F  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
struct FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97 
{
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::handle
	int32_t ___handle_0;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::numBytesRequired
	int32_t ___numBytesRequired_1;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::time
	float ___time_2;
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::includePersistent
	bool ___includePersistent_3;
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::includeTransient
	bool ___includeTransient_4;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
struct FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_pinvoke
{
	int32_t ___handle_0;
	int32_t ___numBytesRequired_1;
	float ___time_2;
	int32_t ___includePersistent_3;
	int32_t ___includeTransient_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
struct FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_com
{
	int32_t ___handle_0;
	int32_t ___numBytesRequired_1;
	float ___time_2;
	int32_t ___includePersistent_3;
	int32_t ___includeTransient_4;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Edge
struct FrozenWorld_Edge_t92E8E9CCCA5277A09D6DFE54E6FAEA27D6D1FDC2 
{
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AnchorId Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Edge::anchorId1
	uint64_t ___anchorId1_0;
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AnchorId Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Edge::anchorId2
	uint64_t ___anchorId2_1;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics
struct FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369 
{
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::refitMergeIndicated
	bool ___refitMergeIndicated_0;
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::refitRefreezeIndicated
	bool ___refitRefreezeIndicated_1;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::numTrackableFragments
	int32_t ___numTrackableFragments_2;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::numVisualSupports
	int32_t ___numVisualSupports_3;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::numVisualSupportAnchors
	int32_t ___numVisualSupportAnchors_4;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::numIgnoredSupports
	int32_t ___numIgnoredSupports_5;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::numIgnoredSupportAnchors
	int32_t ___numIgnoredSupportAnchors_6;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::maxLinearDeviation
	float ___maxLinearDeviation_7;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::maxLateralDeviation
	float ___maxLateralDeviation_8;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::maxAngularDeviation
	float ___maxAngularDeviation_9;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::maxLinearDeviationInFrustum
	float ___maxLinearDeviationInFrustum_10;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::maxLateralDeviationInFrustum
	float ___maxLateralDeviationInFrustum_11;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::maxAngularDeviationInFrustum
	float ___maxAngularDeviationInFrustum_12;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics
struct FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_pinvoke
{
	int32_t ___refitMergeIndicated_0;
	int32_t ___refitRefreezeIndicated_1;
	int32_t ___numTrackableFragments_2;
	int32_t ___numVisualSupports_3;
	int32_t ___numVisualSupportAnchors_4;
	int32_t ___numIgnoredSupports_5;
	int32_t ___numIgnoredSupportAnchors_6;
	float ___maxLinearDeviation_7;
	float ___maxLateralDeviation_8;
	float ___maxAngularDeviation_9;
	float ___maxLinearDeviationInFrustum_10;
	float ___maxLateralDeviationInFrustum_11;
	float ___maxAngularDeviationInFrustum_12;
};
// Native definition for COM marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics
struct FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_com
{
	int32_t ___refitMergeIndicated_0;
	int32_t ___refitRefreezeIndicated_1;
	int32_t ___numTrackableFragments_2;
	int32_t ___numVisualSupports_3;
	int32_t ___numVisualSupportAnchors_4;
	int32_t ___numIgnoredSupports_5;
	int32_t ___numIgnoredSupportAnchors_6;
	float ___maxLinearDeviation_7;
	float ___maxLateralDeviation_8;
	float ___maxAngularDeviation_9;
	float ___maxLinearDeviationInFrustum_10;
	float ___maxLateralDeviationInFrustum_11;
	float ___maxAngularDeviationInFrustum_12;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Quaternion
struct FrozenWorld_Quaternion_t46640A32B0C1A1F7DE0B24C52C77BC77BBD08D77 
{
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Quaternion::x
	float ___x_0;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Quaternion::y
	float ___y_1;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Quaternion::z
	float ___z_2;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Quaternion::w
	float ___w_3;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
struct FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA 
{
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::handle
	int32_t ___handle_0;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::numBytesBuffered
	int32_t ___numBytesBuffered_1;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::time
	float ___time_2;
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::includePersistent
	bool ___includePersistent_3;
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::includeTransient
	bool ___includeTransient_4;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
struct FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_pinvoke
{
	int32_t ___handle_0;
	int32_t ___numBytesBuffered_1;
	float ___time_2;
	int32_t ___includePersistent_3;
	int32_t ___includeTransient_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
struct FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_com
{
	int32_t ___handle_0;
	int32_t ___numBytesBuffered_1;
	float ___time_2;
	int32_t ___includePersistent_3;
	int32_t ___includeTransient_4;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector
struct FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC 
{
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector::x
	float ___x_0;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector::y
	float ___y_1;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector::z
	float ___z_2;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint
struct FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4 
{
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AnchorId Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint::anchorId
	uint64_t ___anchorId_0;
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint::locationFromAnchor
	FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC ___locationFromAnchor_1;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform
struct FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF 
{
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform::position
	FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC ___position_0;
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Quaternion Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform::rotation
	FrozenWorld_Quaternion_t46640A32B0C1A1F7DE0B24C52C77BC77BBD08D77 ___rotation_1;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Anchor
struct FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4 
{
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AnchorId Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Anchor::anchorId
	uint64_t ___anchorId_0;
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_FragmentId Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Anchor::fragmentId
	uint64_t ___fragmentId_1;
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Anchor::transform
	FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF ___transform_2;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_RefitMerge_AdjustedFragment
struct FrozenWorld_RefitMerge_AdjustedFragment_t9DE8705873E4EC446E515400B5799DB7E44791B6 
{
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_FragmentId Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_RefitMerge_AdjustedFragment::fragmentId
	uint64_t ___fragmentId_0;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_RefitMerge_AdjustedFragment::numAdjustedAnchors
	int32_t ___numAdjustedAnchors_1;
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_RefitMerge_AdjustedFragment::adjustment
	FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF ___adjustment_2;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_GetVersion(uint8_t, int32_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL FrozenWorld_GetError();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_GetErrorMessage(int32_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Init();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Destroy();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Step_Init();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_Step_GatherSupports();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Step_AlignSupports();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_GetHead(int32_t, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_SetHead(int32_t, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_GetAlignment(FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_SetAlignment(FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_SetMostSignificantAnchorId(int32_t, uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_GetMostSignificantFragmentId(int32_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_GetNumAnchors(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_GetAnchors(int32_t, int32_t, FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_AddAnchors(int32_t, int32_t, FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL FrozenWorld_RemoveAnchor(int32_t, uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_ClearAnchors(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_GetNumEdges(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_AddEdges(int32_t, int32_t, FrozenWorld_Edge_t92E8E9CCCA5277A09D6DFE54E6FAEA27D6D1FDC2*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_GetMetrics(FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Tracking_CreateFromHead(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Tracking_CreateFromSpawner(FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Tracking_Move(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL FrozenWorld_RefitMerge_Init();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_RefitMerge_Prepare();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_RefitMerge_Apply();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_RefitMerge_GetNumAdjustedFragments();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_RefitMerge_GetAdjustedFragments(int32_t, FrozenWorld_RefitMerge_AdjustedFragment_t9DE8705873E4EC446E515400B5799DB7E44791B6*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_RefitMerge_GetMergedFragmentId(uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL FrozenWorld_RefitRefreeze_Init();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_RefitRefreeze_Prepare();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_RefitRefreeze_Apply();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_RefitRefreeze_GetNumAdjustedFragments();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_RefitRefreeze_GetAdjustedFragmentIds(int32_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL FrozenWorld_RefitRefreeze_CalcAdjustment(FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*, FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_RefitRefreeze_GetMergedFragmentId(uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Serialize_Open(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Serialize_Gather(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_Serialize_Read(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*, int32_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Serialize_Close(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Deserialize_Open(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_Deserialize_Write(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*, int32_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Deserialize_Apply(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Deserialize_Close(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetVersion(System.Boolean,System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_GetVersion_m07823A6EC9330900C9CBE94E9EBCD0C42C270FF7 (bool ___detail0, int32_t ___versionBufferSize1, uint8_t* ___versionOut2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint8_t, int32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 1 + 3 + sizeof(int32_t) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetVersion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_GetVersion)(static_cast<uint8_t>(___detail0), ___versionBufferSize1, ___versionOut2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(static_cast<uint8_t>(___detail0), ___versionBufferSize1, ___versionOut2);
	#endif

	return returnValue;
}
// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Engine_FrozenWorld_GetError_m15EBB19F2B897117FFC4C8E3BCCE7B72A6698C37 (const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetError", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_GetError)();
	#else
	uint8_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetErrorMessage(System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_GetErrorMessage_m1DF9FF0D7AC7D52097308CBC7785F4F2F54D806A (int32_t ___messageBufferSize0, uint8_t* ___messageOut1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetErrorMessage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_GetErrorMessage)(___messageBufferSize0, ___messageOut1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___messageBufferSize0, ___messageOut1);
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Init_m4764FF6E6F8572538236F57EA1CC3882B735652C (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Init", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Init)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Destroy_m09D7CEFD290F64E6CA3E3A68DF54CA571F9E81E9 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Destroy)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Step_Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Step_Init_m1F6FABE3EAE9C7A267C76D4174E7BFEF82CCDF45 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Step_Init", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Step_Init)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Step_GatherSupports()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_Step_GatherSupports_m82F79CDA76A73A4C45EE797679B117AE1230A27C (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Step_GatherSupports", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_Step_GatherSupports)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Step_AlignSupports()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Step_AlignSupports_mC7E03AFA796AD6A49D23710ABBB89ACF2FBCA54F (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Step_AlignSupports", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Step_AlignSupports)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetHead(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_GetHead_m242F6B5C696B3CB124C3C77E6D0A85F5373BBFAD (int32_t ___snapshot0, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___headPositionOut1, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___headDirectionForwardOut2, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___headDirectionUpOut3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*) + sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*) + sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetHead", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_GetHead)(___snapshot0, ___headPositionOut1, ___headDirectionForwardOut2, ___headDirectionUpOut3);
	#else
	il2cppPInvokeFunc(___snapshot0, ___headPositionOut1, ___headDirectionForwardOut2, ___headDirectionUpOut3);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_SetHead(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_SetHead_m0AB95A70BEE1ABAD836C3E9735944F72DE7F3F40 (int32_t ___snapshot0, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___headPosition1, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___headDirectionForward2, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___headDirectionUp3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*) + sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*) + sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_SetHead", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_SetHead)(___snapshot0, ___headPosition1, ___headDirectionForward2, ___headDirectionUp3);
	#else
	il2cppPInvokeFunc(___snapshot0, ___headPosition1, ___headDirectionForward2, ___headDirectionUp3);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetAlignment(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_GetAlignment_mE9FCA7F1C55AFDD71A1801B7E6C0D471D0DEE4CB (FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF* ___spongyFromFrozenTransformOut0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetAlignment", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_GetAlignment)(___spongyFromFrozenTransformOut0);
	#else
	il2cppPInvokeFunc(___spongyFromFrozenTransformOut0);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_SetAlignment(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_SetAlignment_m4107767F4659E3EB04798773F48F46F8316A83EB (FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF* ___spongyFromFrozenTransform0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_SetAlignment", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_SetAlignment)(___spongyFromFrozenTransform0);
	#else
	il2cppPInvokeFunc(___spongyFromFrozenTransform0);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_SetMostSignificantAnchorId(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AnchorId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_SetMostSignificantAnchorId_m9726F043054ED2CC5E6795989230065C1F9513DD (int32_t ___snapshot0, uint64_t ___anchorId1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_SetMostSignificantAnchorId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_SetMostSignificantAnchorId)(___snapshot0, ___anchorId1);
	#else
	il2cppPInvokeFunc(___snapshot0, ___anchorId1);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetMostSignificantFragmentId(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_FragmentId*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_GetMostSignificantFragmentId_m8B37124140465F25B2D05A6D5D3C4718A9372615 (int32_t ___snapshot0, uint64_t* ___fragmentIdOut1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetMostSignificantFragmentId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_GetMostSignificantFragmentId)(___snapshot0, ___fragmentIdOut1);
	#else
	il2cppPInvokeFunc(___snapshot0, ___fragmentIdOut1);
	#endif

}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetNumAnchors(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_GetNumAnchors_m08B593C40BF43365CBC2836374FCD4EC0A9737A3 (int32_t ___snapshot0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetNumAnchors", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_GetNumAnchors)(___snapshot0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___snapshot0);
	#endif

	return returnValue;
}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetAnchors(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,System.Int32,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Anchor*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_GetAnchors_m954D2B3E723662E5810F254F3B9560A4F06E487B (int32_t ___snapshot0, int32_t ___anchorsBufferSize1, FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4* ___anchorsOut2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetAnchors", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_GetAnchors)(___snapshot0, ___anchorsBufferSize1, ___anchorsOut2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___snapshot0, ___anchorsBufferSize1, ___anchorsOut2);
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_AddAnchors(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,System.Int32,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Anchor*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_AddAnchors_mFBB7A91B0C5B8FA37A97AD867626EF730136D8CA (int32_t ___snapshot0, int32_t ___numAnchors1, FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4* ___anchors2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_AddAnchors", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_AddAnchors)(___snapshot0, ___numAnchors1, ___anchors2);
	#else
	il2cppPInvokeFunc(___snapshot0, ___numAnchors1, ___anchors2);
	#endif

}
// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RemoveAnchor(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AnchorId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Engine_FrozenWorld_RemoveAnchor_m18B50DAB446AB793F60D1A5499573DE0D2720198 (int32_t ___snapshot0, uint64_t ___anchorId1, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RemoveAnchor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RemoveAnchor)(___snapshot0, ___anchorId1);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___snapshot0, ___anchorId1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_ClearAnchors(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_ClearAnchors_mE9F3D743B74B499767324D7BF4B300CF25A7EBC2 (int32_t ___snapshot0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_ClearAnchors", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_ClearAnchors)(___snapshot0);
	#else
	il2cppPInvokeFunc(___snapshot0);
	#endif

}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetNumEdges(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_GetNumEdges_m614B3F1A8442E51B6D498C0D6DE65B6A30C68036 (int32_t ___snapshot0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetNumEdges", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_GetNumEdges)(___snapshot0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___snapshot0);
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_AddEdges(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,System.Int32,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Edge*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_AddEdges_m58E4E042BAF53772A36BAD81601D38D2956EE05F (int32_t ___snapshot0, int32_t ___numEdges1, FrozenWorld_Edge_t92E8E9CCCA5277A09D6DFE54E6FAEA27D6D1FDC2* ___edges2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, FrozenWorld_Edge_t92E8E9CCCA5277A09D6DFE54E6FAEA27D6D1FDC2*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(FrozenWorld_Edge_t92E8E9CCCA5277A09D6DFE54E6FAEA27D6D1FDC2*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_AddEdges", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_AddEdges)(___snapshot0, ___numEdges1, ___edges2);
	#else
	il2cppPInvokeFunc(___snapshot0, ___numEdges1, ___edges2);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetMetrics(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_GetMetrics_m71512E4689D14ED1EA197F855F7081092080162C (FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369* ___metricsOut0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetMetrics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_GetMetrics)(___metricsOut0);
	#else
	il2cppPInvokeFunc(___metricsOut0);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Tracking_CreateFromHead(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Tracking_CreateFromHead_mBE85994602B0FE076FD292D505AFBBB4313F6B0B (FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___frozenLocation0, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4* ___attachmentPointOut1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*) + sizeof(FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Tracking_CreateFromHead", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Tracking_CreateFromHead)(___frozenLocation0, ___attachmentPointOut1);
	#else
	il2cppPInvokeFunc(___frozenLocation0, ___attachmentPointOut1);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Tracking_CreateFromSpawner(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Tracking_CreateFromSpawner_mC2BB1C3F6F75E11C8260FA4FEECEEC0577768732 (FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4* ___spawnerAttachmentPoint0, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___frozenLocation1, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4* ___attachmentPointOut2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*) + sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*) + sizeof(FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Tracking_CreateFromSpawner", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Tracking_CreateFromSpawner)(___spawnerAttachmentPoint0, ___frozenLocation1, ___attachmentPointOut2);
	#else
	il2cppPInvokeFunc(___spawnerAttachmentPoint0, ___frozenLocation1, ___attachmentPointOut2);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Tracking_Move(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Tracking_Move_mEE62E69A69DBF4F51E89DDAB445EB34FD7F2995A (FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___targetFrozenLocation0, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4* ___attachmentPointInOut1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*) + sizeof(FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Tracking_Move", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Tracking_Move)(___targetFrozenLocation0, ___attachmentPointInOut1);
	#else
	il2cppPInvokeFunc(___targetFrozenLocation0, ___attachmentPointInOut1);
	#endif

}
// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitMerge_Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Engine_FrozenWorld_RefitMerge_Init_mADF28F1F5180411FCE23D377049AE8478730941C (const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitMerge_Init", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitMerge_Init)();
	#else
	uint8_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitMerge_Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_RefitMerge_Prepare_m5FEEE2496B29F65973372E01A27128AFA1B42EE4 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitMerge_Prepare", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitMerge_Prepare)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitMerge_Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_RefitMerge_Apply_m2EAFDF0E38B5C8887A36F479E7D4E4CD05B29D2E (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitMerge_Apply", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitMerge_Apply)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitMerge_GetNumAdjustedFragments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_RefitMerge_GetNumAdjustedFragments_mA34266DB79738DF208D9732CB52ED8A4AFE96A1D (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitMerge_GetNumAdjustedFragments", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitMerge_GetNumAdjustedFragments)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitMerge_GetAdjustedFragments(System.Int32,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_RefitMerge_AdjustedFragment*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_RefitMerge_GetAdjustedFragments_m20304CA25278BEA0F2505F8625AB1E5416214995 (int32_t ___adjustedFragmentsBufferSize0, FrozenWorld_RefitMerge_AdjustedFragment_t9DE8705873E4EC446E515400B5799DB7E44791B6* ___adjustedFragmentsOut1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, FrozenWorld_RefitMerge_AdjustedFragment_t9DE8705873E4EC446E515400B5799DB7E44791B6*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(FrozenWorld_RefitMerge_AdjustedFragment_t9DE8705873E4EC446E515400B5799DB7E44791B6*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitMerge_GetAdjustedFragments", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitMerge_GetAdjustedFragments)(___adjustedFragmentsBufferSize0, ___adjustedFragmentsOut1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___adjustedFragmentsBufferSize0, ___adjustedFragmentsOut1);
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitMerge_GetMergedFragmentId(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_FragmentId*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_RefitMerge_GetMergedFragmentId_m88A45D1244C5EF83472B63B321FAC66ABFD4E9A6 (uint64_t* ___mergedFragmentIdOut0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitMerge_GetMergedFragmentId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitMerge_GetMergedFragmentId)(___mergedFragmentIdOut0);
	#else
	il2cppPInvokeFunc(___mergedFragmentIdOut0);
	#endif

}
// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitRefreeze_Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Engine_FrozenWorld_RefitRefreeze_Init_m355184CA08F21C8BE432395ED00CCDA38EE052CC (const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitRefreeze_Init", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitRefreeze_Init)();
	#else
	uint8_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitRefreeze_Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_RefitRefreeze_Prepare_m2C11AB320AB925D92FBA914682C5B9383954F520 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitRefreeze_Prepare", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitRefreeze_Prepare)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitRefreeze_Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_RefitRefreeze_Apply_mE51BE7221559523F3B8ACE231DFE950A1A4F58B7 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitRefreeze_Apply", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitRefreeze_Apply)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitRefreeze_GetNumAdjustedFragments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_RefitRefreeze_GetNumAdjustedFragments_mA412D8B77D978DC7C6FB5A64FCCBF50EF3A1AC9E (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitRefreeze_GetNumAdjustedFragments", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitRefreeze_GetNumAdjustedFragments)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitRefreeze_GetAdjustedFragmentIds(System.Int32,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_FragmentId*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_RefitRefreeze_GetAdjustedFragmentIds_m12755D93704AD2D4A0EF08E9EB9795AB9B0BBBC7 (int32_t ___adjustedFragmentIdsBufferSize0, uint64_t* ___adjustedFragmentIdsOut1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitRefreeze_GetAdjustedFragmentIds", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitRefreeze_GetAdjustedFragmentIds)(___adjustedFragmentIdsBufferSize0, ___adjustedFragmentIdsOut1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___adjustedFragmentIdsBufferSize0, ___adjustedFragmentIdsOut1);
	#endif

	return returnValue;
}
// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitRefreeze_CalcAdjustment(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Engine_FrozenWorld_RefitRefreeze_CalcAdjustment_mC06DAF0A5BCFAC812655B317A9DF2503C12EDD2B (FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4* ___attachmentPointInOut0, FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF* ___objectAdjustmentOut1, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*, FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*) + sizeof(FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitRefreeze_CalcAdjustment", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitRefreeze_CalcAdjustment)(___attachmentPointInOut0, ___objectAdjustmentOut1);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___attachmentPointInOut0, ___objectAdjustmentOut1);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitRefreeze_GetMergedFragmentId(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_FragmentId*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_RefitRefreeze_GetMergedFragmentId_mACA6B5723450CE76682E438805A7DBF9B0057151 (uint64_t* ___mergedFragmentIdOut0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitRefreeze_GetMergedFragmentId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitRefreeze_GetMergedFragmentId)(___mergedFragmentIdOut0);
	#else
	il2cppPInvokeFunc(___mergedFragmentIdOut0);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Serialize_Open(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Serialize_Open_m13240F7AA90A44767DB2C66FBD131BEC58A81203 (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA* ___streamInOut0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Serialize_Open", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Serialize_Open)(___streamInOut0);
	#else
	il2cppPInvokeFunc(___streamInOut0);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Serialize_Gather(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Serialize_Gather_m291FB9242F4B053B6CAC0DB67012B9D440C67E34 (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA* ___streamInOut0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Serialize_Gather", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Serialize_Gather)(___streamInOut0);
	#else
	il2cppPInvokeFunc(___streamInOut0);
	#endif

}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Serialize_Read(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream*,System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_Serialize_Read_mFF04E607BB480087AE1C38A7C8A3531D97A3D6F4 (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA* ___streamInOut0, int32_t ___bytesBufferSize1, uint8_t* ___bytesOut2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*, int32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*) + sizeof(int32_t) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Serialize_Read", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_Serialize_Read)(___streamInOut0, ___bytesBufferSize1, ___bytesOut2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___streamInOut0, ___bytesBufferSize1, ___bytesOut2);
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Serialize_Close(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Serialize_Close_mEC29087D136AD55746FDF746163ACA7554416A96 (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA* ___streamInOut0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Serialize_Close", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Serialize_Close)(___streamInOut0);
	#else
	il2cppPInvokeFunc(___streamInOut0);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Deserialize_Open(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Deserialize_Open_mDD3FF2DFFFAA1ECD435188961EFF03A287CAFFCC (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97* ___streamInOut0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Deserialize_Open", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Deserialize_Open)(___streamInOut0);
	#else
	il2cppPInvokeFunc(___streamInOut0);
	#endif

}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Deserialize_Write(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream*,System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_Deserialize_Write_mF38286C0D6E460FBBFE05EFE16BD6D97F44FC3A9 (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97* ___streamInOut0, int32_t ___numBytes1, uint8_t* ___bytes2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*, int32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*) + sizeof(int32_t) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Deserialize_Write", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_Deserialize_Write)(___streamInOut0, ___numBytes1, ___bytes2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___streamInOut0, ___numBytes1, ___bytes2);
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Deserialize_Apply(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Deserialize_Apply_m21D22D741DDDC22B895024E7ACE83B5B354852AA (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97* ___streamInOut0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Deserialize_Apply", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Deserialize_Apply)(___streamInOut0);
	#else
	il2cppPInvokeFunc(___streamInOut0);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Deserialize_Close(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Deserialize_Close_mA5C38F66D6D067D80EECBB9ADCB0B33C2A60163F (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97* ___streamInOut0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Deserialize_Close", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Deserialize_Close)(___streamInOut0);
	#else
	il2cppPInvokeFunc(___streamInOut0);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics
IL2CPP_EXTERN_C void FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshal_pinvoke(const FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369& unmarshaled, FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_pinvoke& marshaled)
{
	marshaled.___refitMergeIndicated_0 = static_cast<int32_t>(unmarshaled.___refitMergeIndicated_0);
	marshaled.___refitRefreezeIndicated_1 = static_cast<int32_t>(unmarshaled.___refitRefreezeIndicated_1);
	marshaled.___numTrackableFragments_2 = unmarshaled.___numTrackableFragments_2;
	marshaled.___numVisualSupports_3 = unmarshaled.___numVisualSupports_3;
	marshaled.___numVisualSupportAnchors_4 = unmarshaled.___numVisualSupportAnchors_4;
	marshaled.___numIgnoredSupports_5 = unmarshaled.___numIgnoredSupports_5;
	marshaled.___numIgnoredSupportAnchors_6 = unmarshaled.___numIgnoredSupportAnchors_6;
	marshaled.___maxLinearDeviation_7 = unmarshaled.___maxLinearDeviation_7;
	marshaled.___maxLateralDeviation_8 = unmarshaled.___maxLateralDeviation_8;
	marshaled.___maxAngularDeviation_9 = unmarshaled.___maxAngularDeviation_9;
	marshaled.___maxLinearDeviationInFrustum_10 = unmarshaled.___maxLinearDeviationInFrustum_10;
	marshaled.___maxLateralDeviationInFrustum_11 = unmarshaled.___maxLateralDeviationInFrustum_11;
	marshaled.___maxAngularDeviationInFrustum_12 = unmarshaled.___maxAngularDeviationInFrustum_12;
}
IL2CPP_EXTERN_C void FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshal_pinvoke_back(const FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_pinvoke& marshaled, FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369& unmarshaled)
{
	bool unmarshaledrefitMergeIndicated_temp_0 = false;
	unmarshaledrefitMergeIndicated_temp_0 = static_cast<bool>(marshaled.___refitMergeIndicated_0);
	unmarshaled.___refitMergeIndicated_0 = unmarshaledrefitMergeIndicated_temp_0;
	bool unmarshaledrefitRefreezeIndicated_temp_1 = false;
	unmarshaledrefitRefreezeIndicated_temp_1 = static_cast<bool>(marshaled.___refitRefreezeIndicated_1);
	unmarshaled.___refitRefreezeIndicated_1 = unmarshaledrefitRefreezeIndicated_temp_1;
	int32_t unmarshalednumTrackableFragments_temp_2 = 0;
	unmarshalednumTrackableFragments_temp_2 = marshaled.___numTrackableFragments_2;
	unmarshaled.___numTrackableFragments_2 = unmarshalednumTrackableFragments_temp_2;
	int32_t unmarshalednumVisualSupports_temp_3 = 0;
	unmarshalednumVisualSupports_temp_3 = marshaled.___numVisualSupports_3;
	unmarshaled.___numVisualSupports_3 = unmarshalednumVisualSupports_temp_3;
	int32_t unmarshalednumVisualSupportAnchors_temp_4 = 0;
	unmarshalednumVisualSupportAnchors_temp_4 = marshaled.___numVisualSupportAnchors_4;
	unmarshaled.___numVisualSupportAnchors_4 = unmarshalednumVisualSupportAnchors_temp_4;
	int32_t unmarshalednumIgnoredSupports_temp_5 = 0;
	unmarshalednumIgnoredSupports_temp_5 = marshaled.___numIgnoredSupports_5;
	unmarshaled.___numIgnoredSupports_5 = unmarshalednumIgnoredSupports_temp_5;
	int32_t unmarshalednumIgnoredSupportAnchors_temp_6 = 0;
	unmarshalednumIgnoredSupportAnchors_temp_6 = marshaled.___numIgnoredSupportAnchors_6;
	unmarshaled.___numIgnoredSupportAnchors_6 = unmarshalednumIgnoredSupportAnchors_temp_6;
	float unmarshaledmaxLinearDeviation_temp_7 = 0.0f;
	unmarshaledmaxLinearDeviation_temp_7 = marshaled.___maxLinearDeviation_7;
	unmarshaled.___maxLinearDeviation_7 = unmarshaledmaxLinearDeviation_temp_7;
	float unmarshaledmaxLateralDeviation_temp_8 = 0.0f;
	unmarshaledmaxLateralDeviation_temp_8 = marshaled.___maxLateralDeviation_8;
	unmarshaled.___maxLateralDeviation_8 = unmarshaledmaxLateralDeviation_temp_8;
	float unmarshaledmaxAngularDeviation_temp_9 = 0.0f;
	unmarshaledmaxAngularDeviation_temp_9 = marshaled.___maxAngularDeviation_9;
	unmarshaled.___maxAngularDeviation_9 = unmarshaledmaxAngularDeviation_temp_9;
	float unmarshaledmaxLinearDeviationInFrustum_temp_10 = 0.0f;
	unmarshaledmaxLinearDeviationInFrustum_temp_10 = marshaled.___maxLinearDeviationInFrustum_10;
	unmarshaled.___maxLinearDeviationInFrustum_10 = unmarshaledmaxLinearDeviationInFrustum_temp_10;
	float unmarshaledmaxLateralDeviationInFrustum_temp_11 = 0.0f;
	unmarshaledmaxLateralDeviationInFrustum_temp_11 = marshaled.___maxLateralDeviationInFrustum_11;
	unmarshaled.___maxLateralDeviationInFrustum_11 = unmarshaledmaxLateralDeviationInFrustum_temp_11;
	float unmarshaledmaxAngularDeviationInFrustum_temp_12 = 0.0f;
	unmarshaledmaxAngularDeviationInFrustum_temp_12 = marshaled.___maxAngularDeviationInFrustum_12;
	unmarshaled.___maxAngularDeviationInFrustum_12 = unmarshaledmaxAngularDeviationInFrustum_temp_12;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics
IL2CPP_EXTERN_C void FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshal_pinvoke_cleanup(FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics
IL2CPP_EXTERN_C void FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshal_com(const FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369& unmarshaled, FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_com& marshaled)
{
	marshaled.___refitMergeIndicated_0 = static_cast<int32_t>(unmarshaled.___refitMergeIndicated_0);
	marshaled.___refitRefreezeIndicated_1 = static_cast<int32_t>(unmarshaled.___refitRefreezeIndicated_1);
	marshaled.___numTrackableFragments_2 = unmarshaled.___numTrackableFragments_2;
	marshaled.___numVisualSupports_3 = unmarshaled.___numVisualSupports_3;
	marshaled.___numVisualSupportAnchors_4 = unmarshaled.___numVisualSupportAnchors_4;
	marshaled.___numIgnoredSupports_5 = unmarshaled.___numIgnoredSupports_5;
	marshaled.___numIgnoredSupportAnchors_6 = unmarshaled.___numIgnoredSupportAnchors_6;
	marshaled.___maxLinearDeviation_7 = unmarshaled.___maxLinearDeviation_7;
	marshaled.___maxLateralDeviation_8 = unmarshaled.___maxLateralDeviation_8;
	marshaled.___maxAngularDeviation_9 = unmarshaled.___maxAngularDeviation_9;
	marshaled.___maxLinearDeviationInFrustum_10 = unmarshaled.___maxLinearDeviationInFrustum_10;
	marshaled.___maxLateralDeviationInFrustum_11 = unmarshaled.___maxLateralDeviationInFrustum_11;
	marshaled.___maxAngularDeviationInFrustum_12 = unmarshaled.___maxAngularDeviationInFrustum_12;
}
IL2CPP_EXTERN_C void FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshal_com_back(const FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_com& marshaled, FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369& unmarshaled)
{
	bool unmarshaledrefitMergeIndicated_temp_0 = false;
	unmarshaledrefitMergeIndicated_temp_0 = static_cast<bool>(marshaled.___refitMergeIndicated_0);
	unmarshaled.___refitMergeIndicated_0 = unmarshaledrefitMergeIndicated_temp_0;
	bool unmarshaledrefitRefreezeIndicated_temp_1 = false;
	unmarshaledrefitRefreezeIndicated_temp_1 = static_cast<bool>(marshaled.___refitRefreezeIndicated_1);
	unmarshaled.___refitRefreezeIndicated_1 = unmarshaledrefitRefreezeIndicated_temp_1;
	int32_t unmarshalednumTrackableFragments_temp_2 = 0;
	unmarshalednumTrackableFragments_temp_2 = marshaled.___numTrackableFragments_2;
	unmarshaled.___numTrackableFragments_2 = unmarshalednumTrackableFragments_temp_2;
	int32_t unmarshalednumVisualSupports_temp_3 = 0;
	unmarshalednumVisualSupports_temp_3 = marshaled.___numVisualSupports_3;
	unmarshaled.___numVisualSupports_3 = unmarshalednumVisualSupports_temp_3;
	int32_t unmarshalednumVisualSupportAnchors_temp_4 = 0;
	unmarshalednumVisualSupportAnchors_temp_4 = marshaled.___numVisualSupportAnchors_4;
	unmarshaled.___numVisualSupportAnchors_4 = unmarshalednumVisualSupportAnchors_temp_4;
	int32_t unmarshalednumIgnoredSupports_temp_5 = 0;
	unmarshalednumIgnoredSupports_temp_5 = marshaled.___numIgnoredSupports_5;
	unmarshaled.___numIgnoredSupports_5 = unmarshalednumIgnoredSupports_temp_5;
	int32_t unmarshalednumIgnoredSupportAnchors_temp_6 = 0;
	unmarshalednumIgnoredSupportAnchors_temp_6 = marshaled.___numIgnoredSupportAnchors_6;
	unmarshaled.___numIgnoredSupportAnchors_6 = unmarshalednumIgnoredSupportAnchors_temp_6;
	float unmarshaledmaxLinearDeviation_temp_7 = 0.0f;
	unmarshaledmaxLinearDeviation_temp_7 = marshaled.___maxLinearDeviation_7;
	unmarshaled.___maxLinearDeviation_7 = unmarshaledmaxLinearDeviation_temp_7;
	float unmarshaledmaxLateralDeviation_temp_8 = 0.0f;
	unmarshaledmaxLateralDeviation_temp_8 = marshaled.___maxLateralDeviation_8;
	unmarshaled.___maxLateralDeviation_8 = unmarshaledmaxLateralDeviation_temp_8;
	float unmarshaledmaxAngularDeviation_temp_9 = 0.0f;
	unmarshaledmaxAngularDeviation_temp_9 = marshaled.___maxAngularDeviation_9;
	unmarshaled.___maxAngularDeviation_9 = unmarshaledmaxAngularDeviation_temp_9;
	float unmarshaledmaxLinearDeviationInFrustum_temp_10 = 0.0f;
	unmarshaledmaxLinearDeviationInFrustum_temp_10 = marshaled.___maxLinearDeviationInFrustum_10;
	unmarshaled.___maxLinearDeviationInFrustum_10 = unmarshaledmaxLinearDeviationInFrustum_temp_10;
	float unmarshaledmaxLateralDeviationInFrustum_temp_11 = 0.0f;
	unmarshaledmaxLateralDeviationInFrustum_temp_11 = marshaled.___maxLateralDeviationInFrustum_11;
	unmarshaled.___maxLateralDeviationInFrustum_11 = unmarshaledmaxLateralDeviationInFrustum_temp_11;
	float unmarshaledmaxAngularDeviationInFrustum_temp_12 = 0.0f;
	unmarshaledmaxAngularDeviationInFrustum_temp_12 = marshaled.___maxAngularDeviationInFrustum_12;
	unmarshaled.___maxAngularDeviationInFrustum_12 = unmarshaledmaxAngularDeviationInFrustum_temp_12;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics
IL2CPP_EXTERN_C void FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshal_com_cleanup(FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshal_pinvoke(const FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA& unmarshaled, FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_pinvoke& marshaled)
{
	marshaled.___handle_0 = unmarshaled.___handle_0;
	marshaled.___numBytesBuffered_1 = unmarshaled.___numBytesBuffered_1;
	marshaled.___time_2 = unmarshaled.___time_2;
	marshaled.___includePersistent_3 = static_cast<int32_t>(unmarshaled.___includePersistent_3);
	marshaled.___includeTransient_4 = static_cast<int32_t>(unmarshaled.___includeTransient_4);
}
IL2CPP_EXTERN_C void FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshal_pinvoke_back(const FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_pinvoke& marshaled, FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA& unmarshaled)
{
	int32_t unmarshaledhandle_temp_0 = 0;
	unmarshaledhandle_temp_0 = marshaled.___handle_0;
	unmarshaled.___handle_0 = unmarshaledhandle_temp_0;
	int32_t unmarshalednumBytesBuffered_temp_1 = 0;
	unmarshalednumBytesBuffered_temp_1 = marshaled.___numBytesBuffered_1;
	unmarshaled.___numBytesBuffered_1 = unmarshalednumBytesBuffered_temp_1;
	float unmarshaledtime_temp_2 = 0.0f;
	unmarshaledtime_temp_2 = marshaled.___time_2;
	unmarshaled.___time_2 = unmarshaledtime_temp_2;
	bool unmarshaledincludePersistent_temp_3 = false;
	unmarshaledincludePersistent_temp_3 = static_cast<bool>(marshaled.___includePersistent_3);
	unmarshaled.___includePersistent_3 = unmarshaledincludePersistent_temp_3;
	bool unmarshaledincludeTransient_temp_4 = false;
	unmarshaledincludeTransient_temp_4 = static_cast<bool>(marshaled.___includeTransient_4);
	unmarshaled.___includeTransient_4 = unmarshaledincludeTransient_temp_4;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshal_pinvoke_cleanup(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshal_com(const FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA& unmarshaled, FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_com& marshaled)
{
	marshaled.___handle_0 = unmarshaled.___handle_0;
	marshaled.___numBytesBuffered_1 = unmarshaled.___numBytesBuffered_1;
	marshaled.___time_2 = unmarshaled.___time_2;
	marshaled.___includePersistent_3 = static_cast<int32_t>(unmarshaled.___includePersistent_3);
	marshaled.___includeTransient_4 = static_cast<int32_t>(unmarshaled.___includeTransient_4);
}
IL2CPP_EXTERN_C void FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshal_com_back(const FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_com& marshaled, FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA& unmarshaled)
{
	int32_t unmarshaledhandle_temp_0 = 0;
	unmarshaledhandle_temp_0 = marshaled.___handle_0;
	unmarshaled.___handle_0 = unmarshaledhandle_temp_0;
	int32_t unmarshalednumBytesBuffered_temp_1 = 0;
	unmarshalednumBytesBuffered_temp_1 = marshaled.___numBytesBuffered_1;
	unmarshaled.___numBytesBuffered_1 = unmarshalednumBytesBuffered_temp_1;
	float unmarshaledtime_temp_2 = 0.0f;
	unmarshaledtime_temp_2 = marshaled.___time_2;
	unmarshaled.___time_2 = unmarshaledtime_temp_2;
	bool unmarshaledincludePersistent_temp_3 = false;
	unmarshaledincludePersistent_temp_3 = static_cast<bool>(marshaled.___includePersistent_3);
	unmarshaled.___includePersistent_3 = unmarshaledincludePersistent_temp_3;
	bool unmarshaledincludeTransient_temp_4 = false;
	unmarshaledincludeTransient_temp_4 = static_cast<bool>(marshaled.___includeTransient_4);
	unmarshaled.___includeTransient_4 = unmarshaledincludeTransient_temp_4;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshal_com_cleanup(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshal_pinvoke(const FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97& unmarshaled, FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_pinvoke& marshaled)
{
	marshaled.___handle_0 = unmarshaled.___handle_0;
	marshaled.___numBytesRequired_1 = unmarshaled.___numBytesRequired_1;
	marshaled.___time_2 = unmarshaled.___time_2;
	marshaled.___includePersistent_3 = static_cast<int32_t>(unmarshaled.___includePersistent_3);
	marshaled.___includeTransient_4 = static_cast<int32_t>(unmarshaled.___includeTransient_4);
}
IL2CPP_EXTERN_C void FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshal_pinvoke_back(const FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_pinvoke& marshaled, FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97& unmarshaled)
{
	int32_t unmarshaledhandle_temp_0 = 0;
	unmarshaledhandle_temp_0 = marshaled.___handle_0;
	unmarshaled.___handle_0 = unmarshaledhandle_temp_0;
	int32_t unmarshalednumBytesRequired_temp_1 = 0;
	unmarshalednumBytesRequired_temp_1 = marshaled.___numBytesRequired_1;
	unmarshaled.___numBytesRequired_1 = unmarshalednumBytesRequired_temp_1;
	float unmarshaledtime_temp_2 = 0.0f;
	unmarshaledtime_temp_2 = marshaled.___time_2;
	unmarshaled.___time_2 = unmarshaledtime_temp_2;
	bool unmarshaledincludePersistent_temp_3 = false;
	unmarshaledincludePersistent_temp_3 = static_cast<bool>(marshaled.___includePersistent_3);
	unmarshaled.___includePersistent_3 = unmarshaledincludePersistent_temp_3;
	bool unmarshaledincludeTransient_temp_4 = false;
	unmarshaledincludeTransient_temp_4 = static_cast<bool>(marshaled.___includeTransient_4);
	unmarshaled.___includeTransient_4 = unmarshaledincludeTransient_temp_4;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshal_pinvoke_cleanup(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshal_com(const FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97& unmarshaled, FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_com& marshaled)
{
	marshaled.___handle_0 = unmarshaled.___handle_0;
	marshaled.___numBytesRequired_1 = unmarshaled.___numBytesRequired_1;
	marshaled.___time_2 = unmarshaled.___time_2;
	marshaled.___includePersistent_3 = static_cast<int32_t>(unmarshaled.___includePersistent_3);
	marshaled.___includeTransient_4 = static_cast<int32_t>(unmarshaled.___includeTransient_4);
}
IL2CPP_EXTERN_C void FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshal_com_back(const FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_com& marshaled, FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97& unmarshaled)
{
	int32_t unmarshaledhandle_temp_0 = 0;
	unmarshaledhandle_temp_0 = marshaled.___handle_0;
	unmarshaled.___handle_0 = unmarshaledhandle_temp_0;
	int32_t unmarshalednumBytesRequired_temp_1 = 0;
	unmarshalednumBytesRequired_temp_1 = marshaled.___numBytesRequired_1;
	unmarshaled.___numBytesRequired_1 = unmarshalednumBytesRequired_temp_1;
	float unmarshaledtime_temp_2 = 0.0f;
	unmarshaledtime_temp_2 = marshaled.___time_2;
	unmarshaled.___time_2 = unmarshaledtime_temp_2;
	bool unmarshaledincludePersistent_temp_3 = false;
	unmarshaledincludePersistent_temp_3 = static_cast<bool>(marshaled.___includePersistent_3);
	unmarshaled.___includePersistent_3 = unmarshaledincludePersistent_temp_3;
	bool unmarshaledincludeTransient_temp_4 = false;
	unmarshaledincludeTransient_temp_4 = static_cast<bool>(marshaled.___includeTransient_4);
	unmarshaled.___includeTransient_4 = unmarshaledincludeTransient_temp_4;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshal_com_cleanup(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

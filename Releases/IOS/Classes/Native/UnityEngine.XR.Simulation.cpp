#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Char>
struct Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F;
// System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>
struct Action_1_tB4B0D0DB16148980518A9D58761727D77FA1F1D3;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274;
// System.Action`1<System.Char>[]
struct Action_1U5BU5D_t525E90B5D1212F32F34CD47670B3553347DFB133;
// System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>[]
struct Action_1U5BU5D_t22E45C2BFF8C89B61E349730E6255288D35F6B88;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>[]
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// UnityEngine.InputSystem.Controls.KeyControl[]
struct KeyControlU5BU5D_t247D92FAA9E46BA28BB54BB6E38E7F99BD2C02DA;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor[]
struct XRCameraSubsystemDescriptorU5BU5D_t7E0751E0A6B869B0FBFD38721E70F445860FB1A0;
// UnityEngine.XR.XRInputSubsystemDescriptor[]
struct XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor[]
struct XRSessionSubsystemDescriptorU5BU5D_tC31A2840B7CA880C5C8629D9FD8827ADBD348905;
// UnityEngine.InputSystem.Controls.AnyKeyControl
struct AnyKeyControl_t88E59A594CAF1E3A432C3BEC2634C0CA462D8A14;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF;
// UnityEngine.XR.Simulation.CameraFPSModeHandler
struct CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06;
// UnityEngine.XR.Simulation.CameraPoseProvider
struct CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB;
// UnityEngine.InputSystem.Controls.KeyControl
struct KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0;
// UnityEngine.InputSystem.Keyboard
struct Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.XR.Simulation.SimulationCameraSubsystem
struct SimulationCameraSubsystem_t717F8F6DC17409C950E1DB8146BE6FFBB1E8AD73;
// UnityEngine.XR.Simulation.SimulationLoader
struct SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635;
// UnityEngine.XR.Simulation.SimulationSessionSubsystem
struct SimulationSessionSubsystem_t958DFC3C8DD1D5FB59F91F75A3F289843A34C552;
// UnityEngine.XR.Simulation.SimulationSettings
struct SimulationSettings_tF51468A5F2E5613885CACB5FEC2ADAA0B684CC4C;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor
struct XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076;
// UnityEngine.XR.Simulation.SimulationCameraSubsystem/SimulationProvider
struct SimulationProvider_t39A9A6D22EE85EA8E482F2FBBF1A7B539D89FDB4;
// UnityEngine.XR.Simulation.SimulationSessionSubsystem/SimulationProvider
struct SimulationProvider_t83E0CFA8DB3FCD0C7B18D124EDF7AC41505E0697;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider
struct Provider_tC76B85B1D0C70B70C5FC6B9E92C0C2C5EF31A26C;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5;

IL2CPP_EXTERN_C RuntimeClass* CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectUtils_t11DAAEB6B091F1DEC4EC9B0D7B4A9B3F7CFAE72F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral47060314D0973CB0E2A355B4108C0FBAA064EA75;
IL2CPP_EXTERN_C String_t* _stringLiteral63D7E01B93889B940FC6102F955EA42D6629CB83;
IL2CPP_EXTERN_C String_t* _stringLiteral6E4EED91FEE297ADD00F0E2DE1B57EF781AD5224;
IL2CPP_EXTERN_C String_t* _stringLiteral71AF3004AD3B24F008F2192E11D5CEDEF3793A42;
IL2CPP_EXTERN_C String_t* _stringLiteral840F3A45786213260CD05811E2B8E00B669351C1;
IL2CPP_EXTERN_C String_t* _stringLiteral95679FAA9C52A87B684AE4F10FA10611659A350D;
IL2CPP_EXTERN_C String_t* _stringLiteralF21674C25F0FE72A37B948AFEA44B10AD4838D53;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83_m0FE5C8352822CD4BB15B7010FD1FF8257048ED60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m751F8C0A254EAAB9A57DC06058D6478D339241E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCEB5D9ECEA5630CE9235CEF5D7619090A6F81F90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_mC52BEDF25401F49398E0E056B1A228F41F3A9A3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847_TisXRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140_m56501C34B03966D4C7BE87D9FC4E999E9536E4F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_TisXRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399_m5B2AA3FA6A492552585DC57D5E844C64E3D23CDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140_m2F72A30224399EAA5195EEE4D68738ECE4C896A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399_mF8BEB0743E76D2125E83FB9AD03B1EFB4573C92C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_GetLoadedSubsystem_TisXRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399_m64FC1ADFAA8EA7282291ADEF78782C15B4877344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SimulationCameraSubsystem_t717F8F6DC17409C950E1DB8146BE6FFBB1E8AD73_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SimulationProvider_t39A9A6D22EE85EA8E482F2FBBF1A7B539D89FDB4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SimulationProvider_t83E0CFA8DB3FCD0C7B18D124EDF7AC41505E0697_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SimulationSessionSubsystem_t958DFC3C8DD1D5FB59F91F75A3F289843A34C552_0_0_0_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1E9E47A6AC464A1287CFA33B27AAABB3374AC88E 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRCameraSubsystemDescriptorU5BU5D_t7E0751E0A6B869B0FBFD38721E70F445860FB1A0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRCameraSubsystemDescriptorU5BU5D_t7E0751E0A6B869B0FBFD38721E70F445860FB1A0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRInputSubsystemDescriptorU5BU5D_tC53A4274C4DC364C07C751B6A9CF029515898A75* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRSessionSubsystemDescriptorU5BU5D_tC31A2840B7CA880C5C8629D9FD8827ADBD348905* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRSessionSubsystemDescriptorU5BU5D_tC31A2840B7CA880C5C8629D9FD8827ADBD348905* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Char>>
struct InlinedArray_1_t031A607559EE9F23E8BC012CD9661BFB3EB2BFC1 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tC95790E55CF4D5C803FAD201917F7CB367351E3F* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t525E90B5D1212F32F34CD47670B3553347DFB133* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>>
struct InlinedArray_1_t8249EE706E2222F1A22F40FB70BEB230C11C5992 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tB4B0D0DB16148980518A9D58761727D77FA1F1D3* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t22E45C2BFF8C89B61E349730E6255288D35F6B88* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector2>>
struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct SubsystemProvider_1_tFF1B90B39743451ED6BD37EDC363EA88F1D43680  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemWithProvider_3_tEC32E35ABA7D3B7D5B9459E6752E697305F3E1FB  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tC76B85B1D0C70B70C5FC6B9E92C0C2C5EF31A26C* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* ___U3CproviderU3Ek__BackingField_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4 
{
	// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<implementationType>k__BackingField
	Type_t* ___U3CimplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageBrightness>k__BackingField
	bool ___U3CsupportsAverageBrightnessU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageColorTemperature>k__BackingField
	bool ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsColorCorrection>k__BackingField
	bool ___U3CsupportsColorCorrectionU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsDisplayMatrix>k__BackingField
	bool ___U3CsupportsDisplayMatrixU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsProjectionMatrix>k__BackingField
	bool ___U3CsupportsProjectionMatrixU3Ek__BackingField_8;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsTimestamp>k__BackingField
	bool ___U3CsupportsTimestampU3Ek__BackingField_9;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraConfigurations>k__BackingField
	bool ___U3CsupportsCameraConfigurationsU3Ek__BackingField_10;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraImage>k__BackingField
	bool ___U3CsupportsCameraImageU3Ek__BackingField_11;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageIntensityInLumens>k__BackingField
	bool ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsFaceTrackingAmbientIntensityLightEstimation>k__BackingField
	bool ___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsFaceTrackingHDRLightEstimation>k__BackingField
	bool ___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsWorldTrackingAmbientIntensityLightEstimation>k__BackingField
	bool ___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsWorldTrackingHDRLightEstimation>k__BackingField
	bool ___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsFocusModes>k__BackingField
	bool ___U3CsupportsFocusModesU3Ek__BackingField_17;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraGrain>k__BackingField
	bool ___U3CsupportsCameraGrainU3Ek__BackingField_18;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CimplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsAverageBrightnessU3Ek__BackingField_4;
	int32_t ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5;
	int32_t ___U3CsupportsColorCorrectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsDisplayMatrixU3Ek__BackingField_7;
	int32_t ___U3CsupportsProjectionMatrixU3Ek__BackingField_8;
	int32_t ___U3CsupportsTimestampU3Ek__BackingField_9;
	int32_t ___U3CsupportsCameraConfigurationsU3Ek__BackingField_10;
	int32_t ___U3CsupportsCameraImageU3Ek__BackingField_11;
	int32_t ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12;
	int32_t ___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13;
	int32_t ___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14;
	int32_t ___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15;
	int32_t ___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16;
	int32_t ___U3CsupportsFocusModesU3Ek__BackingField_17;
	int32_t ___U3CsupportsCameraGrainU3Ek__BackingField_18;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CimplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsAverageBrightnessU3Ek__BackingField_4;
	int32_t ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_5;
	int32_t ___U3CsupportsColorCorrectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsDisplayMatrixU3Ek__BackingField_7;
	int32_t ___U3CsupportsProjectionMatrixU3Ek__BackingField_8;
	int32_t ___U3CsupportsTimestampU3Ek__BackingField_9;
	int32_t ___U3CsupportsCameraConfigurationsU3Ek__BackingField_10;
	int32_t ___U3CsupportsCameraImageU3Ek__BackingField_11;
	int32_t ___U3CsupportsAverageIntensityInLumensU3Ek__BackingField_12;
	int32_t ___U3CsupportsFaceTrackingAmbientIntensityLightEstimationU3Ek__BackingField_13;
	int32_t ___U3CsupportsFaceTrackingHDRLightEstimationU3Ek__BackingField_14;
	int32_t ___U3CsupportsWorldTrackingAmbientIntensityLightEstimationU3Ek__BackingField_15;
	int32_t ___U3CsupportsWorldTrackingHDRLightEstimationU3Ek__BackingField_16;
	int32_t ___U3CsupportsFocusModesU3Ek__BackingField_17;
	int32_t ___U3CsupportsCameraGrainU3Ek__BackingField_18;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_3;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	char* ___U3CidU3Ek__BackingField_2;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	Il2CppChar* ___U3CidU3Ek__BackingField_2;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.XR.ARSubsystems.Feature
struct Feature_t4F077DF9999D98A1C051A9A8983AB9A4F9D00F6A 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.Feature::value__
	uint64_t ___value___2;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;
};

struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_32;
};

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.Key
struct Key_tA157C0DCB2A0D2BE58B76B3BB836A1B2E4EAF387 
{
	// System.Int32 UnityEngine.InputSystem.Key::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.PrimitiveType
struct PrimitiveType_t72F3E6BA10E41F934F63C4F6DF88388E57911C44 
{
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_t01F7B649A99735E8895479D291EB177ADC8B4255 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;
};

// System.TypeCode
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140  : public SubsystemWithProvider_3_tEC32E35ABA7D3B7D5B9459E6752E697305F3E1FB
{
};

// UnityEngine.InputSystem.Controls.AxisControl/Clamp
struct Clamp_tCB96E8D34067B0DCBED42C565F4443DF880DD284 
{
	// System.Int32 UnityEngine.InputSystem.Controls.AxisControl/Clamp::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t9C297F208DE19CEB00A0560F7FDE59F6A2004132 
{
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tF02F85DA24FF16879A67B540FCA560EC955CE728 
{
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;
};

// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider
struct Provider_tC76B85B1D0C70B70C5FC6B9E92C0C2C5EF31A26C  : public SubsystemProvider_1_tFF1B90B39743451ED6BD37EDC363EA88F1D43680
{
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5  : public SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F
{
};

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;
};

// UnityEngine.XR.Simulation.CameraFPSModeHandler
struct CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06  : public RuntimeObject
{
	// System.Boolean UnityEngine.XR.Simulation.CameraFPSModeHandler::m_ShiftSpeed
	bool ___m_ShiftSpeed_3;
	// UnityEngine.Vector2 UnityEngine.XR.Simulation.CameraFPSModeHandler::m_CurrentMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CurrentMousePosition_4;
	// UnityEngine.Vector2 UnityEngine.XR.Simulation.CameraFPSModeHandler::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_5;
	// UnityEngine.Vector2 UnityEngine.XR.Simulation.CameraFPSModeHandler::m_MouseDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MouseDelta_6;
	// UnityEngine.Vector3 UnityEngine.XR.Simulation.CameraFPSModeHandler::m_CurrentInputVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CurrentInputVector_7;
	// System.Boolean UnityEngine.XR.Simulation.CameraFPSModeHandler::m_Dragging
	bool ___m_Dragging_8;
	// System.Boolean UnityEngine.XR.Simulation.CameraFPSModeHandler::<moveActive>k__BackingField
	bool ___U3CmoveActiveU3Ek__BackingField_9;
	// System.Boolean UnityEngine.XR.Simulation.CameraFPSModeHandler::<useMovementBounds>k__BackingField
	bool ___U3CuseMovementBoundsU3Ek__BackingField_10;
	// UnityEngine.Bounds UnityEngine.XR.Simulation.CameraFPSModeHandler::<movementBounds>k__BackingField
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___U3CmovementBoundsU3Ek__BackingField_11;
};

struct CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06_StaticFields
{
	// UnityEngine.XR.Simulation.CameraFPSModeHandler UnityEngine.XR.Simulation.CameraFPSModeHandler::activeHandler
	CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* ___activeHandler_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.XR.Simulation.SimulationCameraSubsystem
struct SimulationCameraSubsystem_t717F8F6DC17409C950E1DB8146BE6FFBB1E8AD73  : public XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.XR.Simulation.SimulationCameraSubsystem/SimulationProvider
struct SimulationProvider_t39A9A6D22EE85EA8E482F2FBBF1A7B539D89FDB4  : public Provider_tC76B85B1D0C70B70C5FC6B9E92C0C2C5EF31A26C
{
};

// UnityEngine.XR.Simulation.SimulationSessionSubsystem/SimulationProvider
struct SimulationProvider_t83E0CFA8DB3FCD0C7B18D124EDF7AC41505E0697  : public Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5
{
	// UnityEngine.XR.Simulation.CameraPoseProvider UnityEngine.XR.Simulation.SimulationSessionSubsystem/SimulationProvider::m_CameraPoseProvider
	CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83* ___m_CameraPoseProvider_1;
	// UnityEngine.GameObject UnityEngine.XR.Simulation.SimulationSessionSubsystem/SimulationProvider::m_SimulationEnvironment
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_SimulationEnvironment_2;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.ARSubsystems.Configuration
struct Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 
{
	// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::<descriptor>k__BackingField
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___U3CdescriptorU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::<features>k__BackingField
	uint64_t ___U3CfeaturesU3Ek__BackingField_1;
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_20;
};

// UnityEngine.XR.Simulation.SimulationSettings
struct SimulationSettings_tF51468A5F2E5613885CACB5FEC2ADAA0B684CC4C  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack_21;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack_21;
};

// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>
struct Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___value_1;
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_35;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC  : public XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};

// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7  : public InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A
{
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_22;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_23;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_24;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_25;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_26;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_27;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_30;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_31;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_32;
};

// UnityEngine.XR.Simulation.CameraPoseProvider
struct CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Simulation.CameraFPSModeHandler UnityEngine.XR.Simulation.CameraPoseProvider::m_FPSModeHandler
	CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* ___m_FPSModeHandler_4;
};

// UnityEngine.InputSystem.Keyboard
struct Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.AnyKeyControl UnityEngine.InputSystem.Keyboard::<anyKey>k__BackingField
	AnyKeyControl_t88E59A594CAF1E3A432C3BEC2634C0CA462D8A14* ___U3CanyKeyU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<shiftKey>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CshiftKeyU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<ctrlKey>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CctrlKeyU3Ek__BackingField_42;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<altKey>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CaltKeyU3Ek__BackingField_43;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<imeSelected>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CimeSelectedU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Char>> UnityEngine.InputSystem.Keyboard::m_TextInputListeners
	InlinedArray_1_t031A607559EE9F23E8BC012CD9661BFB3EB2BFC1 ___m_TextInputListeners_46;
	// System.String UnityEngine.InputSystem.Keyboard::m_KeyboardLayoutName
	String_t* ___m_KeyboardLayoutName_47;
	// UnityEngine.InputSystem.Controls.KeyControl[] UnityEngine.InputSystem.Keyboard::m_Keys
	KeyControlU5BU5D_t247D92FAA9E46BA28BB54BB6E38E7F99BD2C02DA* ___m_Keys_48;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>> UnityEngine.InputSystem.Keyboard::m_ImeCompositionListeners
	InlinedArray_1_t8249EE706E2222F1A22F40FB70BEB230C11C5992 ___m_ImeCompositionListeners_49;
};

struct Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_StaticFields
{
	// UnityEngine.InputSystem.Keyboard UnityEngine.InputSystem.Keyboard::<current>k__BackingField
	Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* ___U3CcurrentU3Ek__BackingField_45;
};

// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<position>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CpositionU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<delta>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CdeltaU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<radius>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CradiusU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Pointer::<pressure>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpressureU3Ek__BackingField_42;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pointer::<press>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CpressU3Ek__BackingField_43;
};

struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_StaticFields
{
	// UnityEngine.InputSystem.Pointer UnityEngine.InputSystem.Pointer::<current>k__BackingField
	Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* ___U3CcurrentU3Ek__BackingField_44;
};

// UnityEngine.XR.Simulation.SimulationLoader
struct SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635  : public XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC
{
};

struct SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor> UnityEngine.XR.Simulation.SimulationLoader::s_SessionSubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SessionSubsystemDescriptors_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor> UnityEngine.XR.Simulation.SimulationLoader::s_CameraSubsystemDescriptors
	List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* ___s_CameraSubsystemDescriptors_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor> UnityEngine.XR.Simulation.SimulationLoader::s_InputSubsystemDescriptors
	List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ___s_InputSubsystemDescriptors_7;
};

// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432  : public InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector2Control::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_23;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399  : public SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526
{
	// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::<currentConfiguration>k__BackingField
	Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D ___U3CcurrentConfigurationU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___m_DefaultConfigurationChooser_5;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___m_ConfigurationChooser_6;
};

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF  : public AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_33;
};

struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_StaticFields
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_34;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_35;
};

// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F  : public Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A
{
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Mouse::<scroll>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CscrollU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<leftButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftButtonU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<middleButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CmiddleButtonU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<rightButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightButtonU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<backButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbackButtonU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<forwardButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CforwardButtonU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.Mouse::<clickCount>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CclickCountU3Ek__BackingField_51;
};

struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_StaticFields
{
	// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::<current>k__BackingField
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* ___U3CcurrentU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::s_PlatformMouseDevice
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* ___s_PlatformMouseDevice_53;
};

// UnityEngine.XR.Simulation.SimulationSessionSubsystem
struct SimulationSessionSubsystem_t958DFC3C8DD1D5FB59F91F75A3F289843A34C552  : public XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399
{
};

// UnityEngine.InputSystem.Controls.KeyControl
struct KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0  : public ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF
{
	// UnityEngine.InputSystem.Key UnityEngine.InputSystem.Controls.KeyControl::<keyCode>k__BackingField
	int32_t ___U3CkeyCodeU3Ek__BackingField_37;
	// System.Int32 UnityEngine.InputSystem.Controls.KeyControl::m_ScanCode
	int32_t ___m_ScanCode_38;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>::ReadValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_gshared (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB* Promise_1_CreateResolvedPromise_m11C1E1CE5D72F7BA518B84F1C7D975AD2A01F869_gshared (int32_t ___result0, const RuntimeMethod* method) ;

// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_TisXRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399_m5B2AA3FA6A492552585DC57D5E844C64E3D23CDA (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___descriptors0, ___id1, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847_TisXRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140_m56501C34B03966D4C7BE87D9FC4E999E9536E4F0 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___descriptors0, ___id1, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRInputSubsystemDescriptor,UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___descriptors0, ___id1, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140_m2F72A30224399EAA5195EEE4D68738ECE4C896A3 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399_mF8BEB0743E76D2125E83FB9AD03B1EFB4573C92C (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m751F8C0A254EAAB9A57DC06058D6478D339241E7 (List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mCEB5D9ECEA5630CE9235CEF5D7619090A6F81F90 (List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Keyboard UnityEngine.InputSystem.Keyboard::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* Keyboard_get_current_mD50C8345E6C992062CBFBE4A9E81C93FFF476016_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_wKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_wKey_m007A60195D3D483BA82BFD9B8650F326E2C58805 (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Controls.ButtonControl::get_isPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6 (ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_sKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_sKey_m2830A1BAA36CADA4783EFD815216A637363F1AB4 (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_aKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_aKey_m532122A52C670F95ADC84B56A4DD32160DD1E7CB (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_dKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_dKey_m0973269D5752E5EEA607BAFB24B39AD9F45122DC (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_eKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_eKey_mC0BD3EF3515DE5B2445BFF7B353CD7EDF80E94C1 (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::get_qKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* Keyboard_get_qKey_mE507B4932B15ADA03A98B1CFA2483C9CA8DF56F4 (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::get_shiftKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* Keyboard_get_shiftKey_mEED4FE9A52F97B3646039BEEF88FE35207FD1379_inline (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* Mouse_get_current_m559AE408DFE4F44D811979FE592BBAF7A84CE6F3_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline (Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector2>::ReadValue()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541 (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*, const RuntimeMethod*))InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_gshared)(__this, method);
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::get_rightButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* Mouse_get_rightButton_mFA0FD700624C0DE1B858F9516426414767F09D98_inline (Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Controls.ButtonControl::get_wasPressedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonControl_get_wasPressedThisFrame_m6ED1DB185035A406B0659A055C3096A5058DBD5B (ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Simulation.CameraFPSModeHandler::set_moveActive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFPSModeHandler_set_moveActive_mE49A905DF30BEAA2F98899F50F572105E0AC895F_inline (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Controls.ButtonControl::get_wasReleasedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonControl_get_wasReleasedThisFrame_m492DB9A10A1EED0FACE2330E230A6DF7650EEC7D (ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Simulation.CameraFPSModeHandler::StopMoveInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFPSModeHandler_StopMoveInput_m822D47BE83688CC2E2AA7EB971611709B5C43E71 (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___mousePosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.XR.Simulation.CameraFPSModeHandler::CalculateMouseRotation(UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraFPSModeHandler_CalculateMouseRotation_m2E6EC3AFE257E5F16B737CA881297E7A642858BC (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, bool ___invertY1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Unity.XR.CoreUtils.QuaternionExtensions::ConstrainYaw(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 QuaternionExtensions_ConstrainYaw_m8564D6572C5D7169E9B48DEACBBA8E93EDBFABE7 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Simulation.CameraFPSModeHandler::GetMovementDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraFPSModeHandler_GetMovementDirection_mB544A9C9E7CC2EB3545912094B2B5408489E72AB (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Simulation.CameraFPSModeHandler::get_useMovementBounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraFPSModeHandler_get_useMovementBounds_m522FC0FC18B1AB816BCA068B23A59D6061B2C4D6_inline (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.XR.Simulation.CameraFPSModeHandler::get_movementBounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 CameraFPSModeHandler_get_movementBounds_m520A841F99DD9C59CA0C08364151AFFD162DF6D6_inline (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_op_Inequality_mCA10789889154806602C77822FA041863EBE4147 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___lhs0, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_ClosestPoint_m5BEB0BAC00387C354CF3C4D013442384122F24FC (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Simulation.CameraFPSModeHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFPSModeHandler__ctor_m9F5C2C1AA6BBCF2A5D84329711F3DE991F7A58DF (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Simulation.CameraFPSModeHandler::HandleGameInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFPSModeHandler_HandleGameInput_mF86121EAD6D55BABB61F5C6B4B838D018F7F116F (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Unity.XR.CoreUtils.TransformExtensions::GetWorldPose(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TransformExtensions_GetWorldPose_m9D21B0564EA540CF54C761F9C73F77F37F146D4D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.Simulation.CameraFPSModeHandler::CalculateMovement(UnityEngine.Pose,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 CameraFPSModeHandler_CalculateMovement_m15769770001C584F3D187A1F40DA751F8FC727B8 (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose0, bool ___invertY1, const RuntimeMethod* method) ;
// System.Void Unity.XR.CoreUtils.TransformExtensions::SetWorldPose(UnityEngine.Transform,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_SetWorldPose_mBE5770AE0BD22C934198C8B2CF8DB9E165D758B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose1, const RuntimeMethod* method) ;
// UnityEngine.Pose Unity.XR.CoreUtils.TransformExtensions::GetLocalPose(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TransformExtensions_GetLocalPose_m8094B038D295D5EC653A1809E984A1426044CD88 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Simulation.CameraPoseProvider::SetCameraPose(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPoseProvider_SetCameraPose_m76EFF325113D50F560ECD535F33F7F2B3E46A841 (float ___pos_x0, float ___pos_y1, float ___pos_z2, float ___rot_x3, float ___rot_y4, float ___rot_z5, float ___rot_w6, const RuntimeMethod* method) ;
// UnityEngine.GameObject Unity.XR.CoreUtils.GameObjectUtils::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObjectUtils_Create_m62DFB2CA101FC3E009EF8DDCED70711BEE1C2EF2 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.XR.Simulation.CameraPoseProvider>()
inline CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83* GameObject_AddComponent_TisCameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83_m0FE5C8352822CD4BB15B7010FD1FF8257048ED60 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_m24A04B94756616FBA387977AF0F6A894D4DC5BCE_inline (XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_providerType_mFE0D3D8FEAF0FFEEA66D0E2C7CABB36944EAD484_inline (XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_subsystemTypeOverride_m82AD4886D0CE8C4D762AC459630CBE13D024FCD2_inline (XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraConfigurations(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraConfigurations_m5425AF5D348E1918644909C45ABA7220D2A8B92F_inline (XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraImage(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraImage_mC9312D97D6F2508F8692EF4C40909CBA55F6D769_inline (XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem::Register(UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystem_Register_m6CA21A327BABC3CCAE1881ADBCEA4D7E2D5E18D4 (XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4 ___cameraSubsystemParams0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystem__ctor_m1BE10CD8CF719A3400CFEF6AD97D8E025CA91504 (XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mC30CBDE9E605D4DD1F82355FBC92F02272A9D132 (Provider_tC76B85B1D0C70B70C5FC6B9E92C0C2C5EF31A26C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m3FBDE9F18337EA31F279277BD46E76C6511F3514 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___cinfo0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_mB926772E21C65B0CBCE36FD4610CEC1B677999C8 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::CreateResolvedPromise(T)
inline Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* Promise_1_CreateResolvedPromise_mC52BEDF25401F49398E0E056B1A228F41F3A9A3E (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m11C1E1CE5D72F7BA518B84F1C7D975AD2A01F869_gshared)(___result0, method);
}
// UnityEngine.XR.Simulation.CameraPoseProvider UnityEngine.XR.Simulation.CameraPoseProvider::AddPoseProviderToScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83* CameraPoseProvider_AddPoseProviderToScene_m786E9834C47895D32EF4456640CEE914921F96ED (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Simulation.SimulationSessionSubsystem/SimulationProvider::SetupSimulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationProvider_SetupSimulation_m10422168055510E790C1EC2D6E9DE81F7DD1A36A (SimulationProvider_t83E0CFA8DB3FCD0C7B18D124EDF7AC41505E0697* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Simulation.SimulationSessionSubsystem/SimulationProvider::ShutdownSimulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationProvider_ShutdownSimulation_mB2B0C8F566754B8C792631DCEA6D74880374481C (SimulationProvider_t83E0CFA8DB3FCD0C7B18D124EDF7AC41505E0697* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507 (int32_t ___type0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m43661C1B8B6373D456C0CDA35F96AACBAB01290A (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_XRSimulationSubsystem_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL XRSimulationSubsystem_SetCameraPose(float, float, float, float, float, float, float);
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
// System.Boolean UnityEngine.XR.Simulation.SimulationLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulationLoader_Initialize_mA14BD549552ECE98214521751C2CAE1E0E0D2AFD (SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847_TisXRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140_m56501C34B03966D4C7BE87D9FC4E999E9536E4F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisXRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_TisXRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399_m5B2AA3FA6A492552585DC57D5E844C64E3D23CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_GetLoadedSubsystem_TisXRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399_m64FC1ADFAA8EA7282291ADEF78782C15B4877344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47060314D0973CB0E2A355B4108C0FBAA064EA75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E4EED91FEE297ADD00F0E2DE1B57EF781AD5224);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral840F3A45786213260CD05811E2B8E00B669351C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95679FAA9C52A87B684AE4F10FA10611659A350D);
		s_Il2CppMethodInitialized = true;
	}
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* G_B2_0 = NULL;
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* G_B1_0 = NULL;
	{
		// CreateSubsystem<XRSessionSubsystemDescriptor, XRSessionSubsystem>(s_SessionSubsystemDescriptors, SimulationSessionSubsystem.k_SubsystemId);
		il2cpp_codegen_runtime_class_init_inline(SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_il2cpp_TypeInfo_var);
		List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* L_0 = ((SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_StaticFields*)il2cpp_codegen_static_fields_for(SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_il2cpp_TypeInfo_var))->___s_SessionSubsystemDescriptors_5;
		XRLoaderHelper_CreateSubsystem_TisXRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_TisXRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399_m5B2AA3FA6A492552585DC57D5E844C64E3D23CDA(__this, L_0, _stringLiteral47060314D0973CB0E2A355B4108C0FBAA064EA75, XRLoaderHelper_CreateSubsystem_TisXRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_TisXRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399_m5B2AA3FA6A492552585DC57D5E844C64E3D23CDA_RuntimeMethod_var);
		// CreateSubsystem<XRCameraSubsystemDescriptor, XRCameraSubsystem>(s_CameraSubsystemDescriptors, SimulationCameraSubsystem.k_SubsystemId);
		List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* L_1 = ((SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_StaticFields*)il2cpp_codegen_static_fields_for(SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_il2cpp_TypeInfo_var))->___s_CameraSubsystemDescriptors_6;
		XRLoaderHelper_CreateSubsystem_TisXRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847_TisXRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140_m56501C34B03966D4C7BE87D9FC4E999E9536E4F0(__this, L_1, _stringLiteral95679FAA9C52A87B684AE4F10FA10611659A350D, XRLoaderHelper_CreateSubsystem_TisXRCameraSubsystemDescriptor_t4C2FD5F5B1005FCF89005E0F2CFE0FF86DDC6847_TisXRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140_m56501C34B03966D4C7BE87D9FC4E999E9536E4F0_RuntimeMethod_var);
		// CreateSubsystem<XRInputSubsystemDescriptor, XRInputSubsystem>(s_InputSubsystemDescriptors, "XRSimulation-Input");
		List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* L_2 = ((SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_StaticFields*)il2cpp_codegen_static_fields_for(SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_il2cpp_TypeInfo_var))->___s_InputSubsystemDescriptors_7;
		XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C(__this, L_2, _stringLiteral6E4EED91FEE297ADD00F0E2DE1B57EF781AD5224, XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t42088DD6542C0BDD27C2951B911E4F69DD1F917D_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mA9FE0AE2F98657CD075CD191BAB94910F963C08C_RuntimeMethod_var);
		// var sessionSubsystem = GetLoadedSubsystem<XRSessionSubsystem>();
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_3;
		L_3 = GenericVirtualFuncInvoker0< XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* >::Invoke(XRLoaderHelper_GetLoadedSubsystem_TisXRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399_m64FC1ADFAA8EA7282291ADEF78782C15B4877344_RuntimeMethod_var, __this);
		// if (sessionSubsystem == null)
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_0043;
		}
	}
	{
		// Debug.LogError("Failed to load session subsystem.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral840F3A45786213260CD05811E2B8E00B669351C1, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0043:
	{
		// return sessionSubsystem != null;
		return (bool)((!(((RuntimeObject*)(XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399*)G_B2_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.Simulation.SimulationLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulationLoader_Deinitialize_m91E166B0C0AC026257745C9273244D16686E819B (SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140_m2F72A30224399EAA5195EEE4D68738ECE4C896A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoaderHelper_DestroySubsystem_TisXRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399_mF8BEB0743E76D2125E83FB9AD03B1EFB4573C92C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DestroySubsystem<XRInputSubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F(__this, XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_m22B2454EB0F4E32155EEE6022768B9781DB0085F_RuntimeMethod_var);
		// DestroySubsystem<XRCameraSubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140_m2F72A30224399EAA5195EEE4D68738ECE4C896A3(__this, XRLoaderHelper_DestroySubsystem_TisXRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140_m2F72A30224399EAA5195EEE4D68738ECE4C896A3_RuntimeMethod_var);
		// DestroySubsystem<XRSessionSubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399_mF8BEB0743E76D2125E83FB9AD03B1EFB4573C92C(__this, XRLoaderHelper_DestroySubsystem_TisXRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399_mF8BEB0743E76D2125E83FB9AD03B1EFB4573C92C_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.Simulation.SimulationLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationLoader__ctor_m1BD5B0EAD8041E9836FF44321BC140BFCD52FDD3 (SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635* __this, const RuntimeMethod* method) 
{
	{
		XRLoaderHelper__ctor_mEAD9691DBE10C223AB11AB7056ED0B3BA59D7699(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Simulation.SimulationLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationLoader__cctor_m30B0DB37C3A2B9C8A5DC2EF5AF24F9C249DC092A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m751F8C0A254EAAB9A57DC06058D6478D339241E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCEB5D9ECEA5630CE9235CEF5D7619090A6F81F90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<XRSessionSubsystemDescriptor> s_SessionSubsystemDescriptors = new List<XRSessionSubsystemDescriptor>();
		List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* L_0 = (List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34*)il2cpp_codegen_object_new(List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m751F8C0A254EAAB9A57DC06058D6478D339241E7(L_0, List_1__ctor_m751F8C0A254EAAB9A57DC06058D6478D339241E7_RuntimeMethod_var);
		((SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_StaticFields*)il2cpp_codegen_static_fields_for(SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_il2cpp_TypeInfo_var))->___s_SessionSubsystemDescriptors_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_StaticFields*)il2cpp_codegen_static_fields_for(SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_il2cpp_TypeInfo_var))->___s_SessionSubsystemDescriptors_5), (void*)L_0);
		// static List<XRCameraSubsystemDescriptor> s_CameraSubsystemDescriptors = new List<XRCameraSubsystemDescriptor>();
		List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* L_1 = (List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC*)il2cpp_codegen_object_new(List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCEB5D9ECEA5630CE9235CEF5D7619090A6F81F90(L_1, List_1__ctor_mCEB5D9ECEA5630CE9235CEF5D7619090A6F81F90_RuntimeMethod_var);
		((SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_StaticFields*)il2cpp_codegen_static_fields_for(SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_il2cpp_TypeInfo_var))->___s_CameraSubsystemDescriptors_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_StaticFields*)il2cpp_codegen_static_fields_for(SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_il2cpp_TypeInfo_var))->___s_CameraSubsystemDescriptors_6), (void*)L_1);
		// static List<XRInputSubsystemDescriptor> s_InputSubsystemDescriptors = new List<XRInputSubsystemDescriptor>();
		List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87* L_2 = (List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87*)il2cpp_codegen_object_new(List_1_tE3AE94237CE649B47E1D52E1A3120E772255FF87_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD(L_2, List_1__ctor_m2211D9F948E2002179E205222318FE448863F2CD_RuntimeMethod_var);
		((SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_StaticFields*)il2cpp_codegen_static_fields_for(SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_il2cpp_TypeInfo_var))->___s_InputSubsystemDescriptors_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_StaticFields*)il2cpp_codegen_static_fields_for(SimulationLoader_t8EFAFA13EEC166232E38BAC13255CB91BAA7E635_il2cpp_TypeInfo_var))->___s_InputSubsystemDescriptors_7), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Simulation.SimulationSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationSettings__ctor_mF48B8761A51C0E692705AE8E468A853AC3D54BE4 (SimulationSettings_tF51468A5F2E5613885CACB5FEC2ADAA0B684CC4C* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.Simulation.CameraFPSModeHandler::get_moveActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraFPSModeHandler_get_moveActive_m3F070DEBE0E2BD42DE1D7DA19A4963099A5EC357 (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, const RuntimeMethod* method) 
{
	{
		// public bool moveActive { get; private set; }
		bool L_0 = __this->___U3CmoveActiveU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Simulation.CameraFPSModeHandler::set_moveActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFPSModeHandler_set_moveActive_mE49A905DF30BEAA2F98899F50F572105E0AC895F (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool moveActive { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CmoveActiveU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.Simulation.CameraFPSModeHandler::get_useMovementBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraFPSModeHandler_get_useMovementBounds_m522FC0FC18B1AB816BCA068B23A59D6061B2C4D6 (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, const RuntimeMethod* method) 
{
	{
		// public bool useMovementBounds { get; set; }
		bool L_0 = __this->___U3CuseMovementBoundsU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Simulation.CameraFPSModeHandler::set_useMovementBounds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFPSModeHandler_set_useMovementBounds_mEA5CC2290B3A448A2164106D338304D064E0364C (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool useMovementBounds { get; set; }
		bool L_0 = ___value0;
		__this->___U3CuseMovementBoundsU3Ek__BackingField_10 = L_0;
		return;
	}
}
// UnityEngine.Bounds UnityEngine.XR.Simulation.CameraFPSModeHandler::get_movementBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 CameraFPSModeHandler_get_movementBounds_m520A841F99DD9C59CA0C08364151AFFD162DF6D6 (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, const RuntimeMethod* method) 
{
	{
		// public Bounds movementBounds { get; set; }
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = __this->___U3CmovementBoundsU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Simulation.CameraFPSModeHandler::set_movementBounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFPSModeHandler_set_movementBounds_m19511D99B353A36B23BC2EFA1AABB7C2ED61DFAE (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) 
{
	{
		// public Bounds movementBounds { get; set; }
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = ___value0;
		__this->___U3CmovementBoundsU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.Simulation.CameraFPSModeHandler::HandleGameInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFPSModeHandler_HandleGameInput_mF86121EAD6D55BABB61F5C6B4B838D018F7F116F (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* V_0 = NULL;
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B4_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B1_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B3_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B2_0 = NULL;
	float G_B5_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B5_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B9_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B8_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B7_0 = NULL;
	float G_B10_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B10_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B14_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B11_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B13_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B12_0 = NULL;
	float G_B15_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B15_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B19_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B16_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B18_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B17_0 = NULL;
	float G_B20_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B20_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B24_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B21_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B23_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B22_0 = NULL;
	float G_B25_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B25_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B29_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B26_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B28_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B27_0 = NULL;
	float G_B30_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B30_1 = NULL;
	{
		// var keyboard = Keyboard.current;
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_0;
		L_0 = Keyboard_get_current_mD50C8345E6C992062CBFBE4A9E81C93FFF476016_inline(NULL);
		V_0 = L_0;
		// m_CurrentInputVector.z = keyboard.wKey.isPressed ? 1f : m_CurrentInputVector.z > 0f ? 0f : m_CurrentInputVector.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___m_CurrentInputVector_7);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_2 = V_0;
		NullCheck(L_2);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_3;
		L_3 = Keyboard_get_wKey_m007A60195D3D483BA82BFD9B8650F326E2C58805(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_3, NULL);
		G_B1_0 = L_1;
		if (L_4)
		{
			G_B4_0 = L_1;
			goto IL_003f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___m_CurrentInputVector_7);
		float L_6 = L_5->___z_4;
		G_B2_0 = G_B1_0;
		if ((((float)L_6) > ((float)(0.0f))))
		{
			G_B3_0 = G_B1_0;
			goto IL_0038;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___m_CurrentInputVector_7);
		float L_8 = L_7->___z_4;
		G_B5_0 = L_8;
		G_B5_1 = G_B2_0;
		goto IL_0044;
	}

IL_0038:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B3_0;
		goto IL_0044;
	}

IL_003f:
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B4_0;
	}

IL_0044:
	{
		G_B5_1->___z_4 = G_B5_0;
		// m_CurrentInputVector.z = keyboard.sKey.isPressed ? -1f : m_CurrentInputVector.z < 0f ? 0f : m_CurrentInputVector.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___m_CurrentInputVector_7);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_10 = V_0;
		NullCheck(L_10);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_11;
		L_11 = Keyboard_get_sKey_m2830A1BAA36CADA4783EFD815216A637363F1AB4(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_11, NULL);
		G_B6_0 = L_9;
		if (L_12)
		{
			G_B9_0 = L_9;
			goto IL_0082;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___m_CurrentInputVector_7);
		float L_14 = L_13->___z_4;
		G_B7_0 = G_B6_0;
		if ((((float)L_14) < ((float)(0.0f))))
		{
			G_B8_0 = G_B6_0;
			goto IL_007b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___m_CurrentInputVector_7);
		float L_16 = L_15->___z_4;
		G_B10_0 = L_16;
		G_B10_1 = G_B7_0;
		goto IL_0087;
	}

IL_007b:
	{
		G_B10_0 = (0.0f);
		G_B10_1 = G_B8_0;
		goto IL_0087;
	}

IL_0082:
	{
		G_B10_0 = (-1.0f);
		G_B10_1 = G_B9_0;
	}

IL_0087:
	{
		G_B10_1->___z_4 = G_B10_0;
		// m_CurrentInputVector.x = keyboard.aKey.isPressed ? -1f : m_CurrentInputVector.x < 0f ? 0f : m_CurrentInputVector.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&__this->___m_CurrentInputVector_7);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_18 = V_0;
		NullCheck(L_18);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_19;
		L_19 = Keyboard_get_aKey_m532122A52C670F95ADC84B56A4DD32160DD1E7CB(L_18, NULL);
		NullCheck(L_19);
		bool L_20;
		L_20 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_19, NULL);
		G_B11_0 = L_17;
		if (L_20)
		{
			G_B14_0 = L_17;
			goto IL_00c5;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___m_CurrentInputVector_7);
		float L_22 = L_21->___x_2;
		G_B12_0 = G_B11_0;
		if ((((float)L_22) < ((float)(0.0f))))
		{
			G_B13_0 = G_B11_0;
			goto IL_00be;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___m_CurrentInputVector_7);
		float L_24 = L_23->___x_2;
		G_B15_0 = L_24;
		G_B15_1 = G_B12_0;
		goto IL_00ca;
	}

IL_00be:
	{
		G_B15_0 = (0.0f);
		G_B15_1 = G_B13_0;
		goto IL_00ca;
	}

IL_00c5:
	{
		G_B15_0 = (-1.0f);
		G_B15_1 = G_B14_0;
	}

IL_00ca:
	{
		G_B15_1->___x_2 = G_B15_0;
		// m_CurrentInputVector.x = keyboard.dKey.isPressed ? 1f : m_CurrentInputVector.x > 0f ? 0f : m_CurrentInputVector.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&__this->___m_CurrentInputVector_7);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_26 = V_0;
		NullCheck(L_26);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_27;
		L_27 = Keyboard_get_dKey_m0973269D5752E5EEA607BAFB24B39AD9F45122DC(L_26, NULL);
		NullCheck(L_27);
		bool L_28;
		L_28 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_27, NULL);
		G_B16_0 = L_25;
		if (L_28)
		{
			G_B19_0 = L_25;
			goto IL_0108;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (&__this->___m_CurrentInputVector_7);
		float L_30 = L_29->___x_2;
		G_B17_0 = G_B16_0;
		if ((((float)L_30) > ((float)(0.0f))))
		{
			G_B18_0 = G_B16_0;
			goto IL_0101;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (&__this->___m_CurrentInputVector_7);
		float L_32 = L_31->___x_2;
		G_B20_0 = L_32;
		G_B20_1 = G_B17_0;
		goto IL_010d;
	}

IL_0101:
	{
		G_B20_0 = (0.0f);
		G_B20_1 = G_B18_0;
		goto IL_010d;
	}

IL_0108:
	{
		G_B20_0 = (1.0f);
		G_B20_1 = G_B19_0;
	}

IL_010d:
	{
		G_B20_1->___x_2 = G_B20_0;
		// m_CurrentInputVector.y = keyboard.eKey.isPressed ? 1f : m_CurrentInputVector.y > 0f ? 0f : m_CurrentInputVector.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = (&__this->___m_CurrentInputVector_7);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_34 = V_0;
		NullCheck(L_34);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_35;
		L_35 = Keyboard_get_eKey_mC0BD3EF3515DE5B2445BFF7B353CD7EDF80E94C1(L_34, NULL);
		NullCheck(L_35);
		bool L_36;
		L_36 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_35, NULL);
		G_B21_0 = L_33;
		if (L_36)
		{
			G_B24_0 = L_33;
			goto IL_014b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_37 = (&__this->___m_CurrentInputVector_7);
		float L_38 = L_37->___y_3;
		G_B22_0 = G_B21_0;
		if ((((float)L_38) > ((float)(0.0f))))
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = (&__this->___m_CurrentInputVector_7);
		float L_40 = L_39->___y_3;
		G_B25_0 = L_40;
		G_B25_1 = G_B22_0;
		goto IL_0150;
	}

IL_0144:
	{
		G_B25_0 = (0.0f);
		G_B25_1 = G_B23_0;
		goto IL_0150;
	}

IL_014b:
	{
		G_B25_0 = (1.0f);
		G_B25_1 = G_B24_0;
	}

IL_0150:
	{
		G_B25_1->___y_3 = G_B25_0;
		// m_CurrentInputVector.y = keyboard.qKey.isPressed ? -1f : m_CurrentInputVector.y < 0f ? 0f : m_CurrentInputVector.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_41 = (&__this->___m_CurrentInputVector_7);
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_42 = V_0;
		NullCheck(L_42);
		KeyControl_t1686D14A78AEC9364B8C7628DD482DE99CC20FE0* L_43;
		L_43 = Keyboard_get_qKey_mE507B4932B15ADA03A98B1CFA2483C9CA8DF56F4(L_42, NULL);
		NullCheck(L_43);
		bool L_44;
		L_44 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_43, NULL);
		G_B26_0 = L_41;
		if (L_44)
		{
			G_B29_0 = L_41;
			goto IL_018e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_45 = (&__this->___m_CurrentInputVector_7);
		float L_46 = L_45->___y_3;
		G_B27_0 = G_B26_0;
		if ((((float)L_46) < ((float)(0.0f))))
		{
			G_B28_0 = G_B26_0;
			goto IL_0187;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_47 = (&__this->___m_CurrentInputVector_7);
		float L_48 = L_47->___y_3;
		G_B30_0 = L_48;
		G_B30_1 = G_B27_0;
		goto IL_0193;
	}

IL_0187:
	{
		G_B30_0 = (0.0f);
		G_B30_1 = G_B28_0;
		goto IL_0193;
	}

IL_018e:
	{
		G_B30_0 = (-1.0f);
		G_B30_1 = G_B29_0;
	}

IL_0193:
	{
		G_B30_1->___y_3 = G_B30_0;
		// m_ShiftSpeed = keyboard.shiftKey.isPressed;
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_49 = V_0;
		NullCheck(L_49);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_50;
		L_50 = Keyboard_get_shiftKey_mEED4FE9A52F97B3646039BEEF88FE35207FD1379_inline(L_49, NULL);
		NullCheck(L_50);
		bool L_51;
		L_51 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_50, NULL);
		__this->___m_ShiftSpeed_3 = L_51;
		// var mouse = Mouse.current;
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_52;
		L_52 = Mouse_get_current_m559AE408DFE4F44D811979FE592BBAF7A84CE6F3_inline(NULL);
		V_1 = L_52;
		// m_CurrentMousePosition = mouse.position.ReadValue();
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_53 = V_1;
		NullCheck(L_53);
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_54;
		L_54 = Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline(L_53, NULL);
		NullCheck(L_54);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		L_55 = InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541(L_54, InputControl_1_ReadValue_m362E05F00FE8CF8FC52F0D673291907EC7FA6541_RuntimeMethod_var);
		__this->___m_CurrentMousePosition_4 = L_55;
		// m_Dragging = true;
		__this->___m_Dragging_8 = (bool)1;
		// if (mouse.rightButton.wasPressedThisFrame)
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_56 = V_1;
		NullCheck(L_56);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_57;
		L_57 = Mouse_get_rightButton_mFA0FD700624C0DE1B858F9516426414767F09D98_inline(L_56, NULL);
		NullCheck(L_57);
		bool L_58;
		L_58 = ButtonControl_get_wasPressedThisFrame_m6ED1DB185035A406B0659A055C3096A5058DBD5B(L_57, NULL);
		if (!L_58)
		{
			goto IL_01e8;
		}
	}
	{
		// m_LastMousePosition = m_CurrentMousePosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = __this->___m_CurrentMousePosition_4;
		__this->___m_LastMousePosition_5 = L_59;
		// moveActive = true;
		CameraFPSModeHandler_set_moveActive_mE49A905DF30BEAA2F98899F50F572105E0AC895F_inline(__this, (bool)1, NULL);
		return;
	}

IL_01e8:
	{
		// else if (mouse.rightButton.wasReleasedThisFrame)
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_60 = V_1;
		NullCheck(L_60);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_61;
		L_61 = Mouse_get_rightButton_mFA0FD700624C0DE1B858F9516426414767F09D98_inline(L_60, NULL);
		NullCheck(L_61);
		bool L_62;
		L_62 = ButtonControl_get_wasReleasedThisFrame_m492DB9A10A1EED0FACE2330E230A6DF7650EEC7D(L_61, NULL);
		if (!L_62)
		{
			goto IL_0202;
		}
	}
	{
		// StopMoveInput(m_CurrentMousePosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = __this->___m_CurrentMousePosition_4;
		CameraFPSModeHandler_StopMoveInput_m822D47BE83688CC2E2AA7EB971611709B5C43E71(__this, L_63, NULL);
		return;
	}

IL_0202:
	{
		// else if (mouse.rightButton.isPressed)
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_64 = V_1;
		NullCheck(L_64);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_65;
		L_65 = Mouse_get_rightButton_mFA0FD700624C0DE1B858F9516426414767F09D98_inline(L_64, NULL);
		NullCheck(L_65);
		bool L_66;
		L_66 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_65, NULL);
		if (!L_66)
		{
			goto IL_0232;
		}
	}
	{
		// m_MouseDelta = m_CurrentMousePosition - m_LastMousePosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = __this->___m_CurrentMousePosition_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68 = __this->___m_LastMousePosition_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		L_69 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_67, L_68, NULL);
		__this->___m_MouseDelta_6 = L_69;
		// m_LastMousePosition = m_CurrentMousePosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = __this->___m_CurrentMousePosition_4;
		__this->___m_LastMousePosition_5 = L_70;
	}

IL_0232:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Simulation.CameraFPSModeHandler::StopMoveInput(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFPSModeHandler_StopMoveInput_m822D47BE83688CC2E2AA7EB971611709B5C43E71 (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___mousePosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (activeHandler == this)
		CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* L_0 = ((CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06_StaticFields*)il2cpp_codegen_static_fields_for(CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06_il2cpp_TypeInfo_var))->___activeHandler_0;
		if ((!(((RuntimeObject*)(CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06*)L_0) == ((RuntimeObject*)(CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06*)__this))))
		{
			goto IL_000e;
		}
	}
	{
		// activeHandler = null;
		((CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06_StaticFields*)il2cpp_codegen_static_fields_for(CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06_il2cpp_TypeInfo_var))->___activeHandler_0 = (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06_StaticFields*)il2cpp_codegen_static_fields_for(CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06_il2cpp_TypeInfo_var))->___activeHandler_0), (void*)(CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06*)NULL);
	}

IL_000e:
	{
		// moveActive = false;
		CameraFPSModeHandler_set_moveActive_mE49A905DF30BEAA2F98899F50F572105E0AC895F_inline(__this, (bool)0, NULL);
		// m_CurrentMousePosition = mousePosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___mousePosition0;
		__this->___m_CurrentMousePosition_4 = L_1;
		// m_MouseDelta = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___m_MouseDelta_6 = L_2;
		// m_LastMousePosition = m_CurrentMousePosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___m_CurrentMousePosition_4;
		__this->___m_LastMousePosition_5 = L_3;
		// m_CurrentInputVector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___m_CurrentInputVector_7 = L_4;
		// m_ShiftSpeed = false;
		__this->___m_ShiftSpeed_3 = (bool)0;
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.Simulation.CameraFPSModeHandler::GetMovementDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraFPSModeHandler_GetMovementDirection_mB544A9C9E7CC2EB3545912094B2B5408489E72AB (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (m_CurrentInputVector.sqrMagnitude < float.Epsilon)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___m_CurrentInputVector_7);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline(L_0, NULL);
		if ((!(((float)L_1) < ((float)(1.40129846E-45f)))))
		{
			goto IL_0018;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		return L_2;
	}

IL_0018:
	{
		// var speedModifier = k_MoveSpeed;
		V_0 = (1.0f);
		// if (!Application.isPlaying && m_ShiftSpeed)
		bool L_3;
		L_3 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		bool L_4 = __this->___m_ShiftSpeed_3;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// speedModifier *= 5f;
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_multiply(L_5, (5.0f)));
		goto IL_0050;
	}

IL_0037:
	{
		// else if (Keyboard.current.shiftKey.isPressed)
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_6;
		L_6 = Keyboard_get_current_mD50C8345E6C992062CBFBE4A9E81C93FFF476016_inline(NULL);
		NullCheck(L_6);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_7;
		L_7 = Keyboard_get_shiftKey_mEED4FE9A52F97B3646039BEEF88FE35207FD1379_inline(L_6, NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = ButtonControl_get_isPressed_m947621402F6EC1B957C2DE984806A6500D422EA6(L_7, NULL);
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		// speedModifier *= 5f;
		float L_9 = V_0;
		V_0 = ((float)il2cpp_codegen_multiply(L_9, (5.0f)));
	}

IL_0050:
	{
		// return Time.deltaTime * speedModifier * m_CurrentInputVector.normalized;
		float L_10;
		L_10 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___m_CurrentInputVector_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply(L_10, L_11)), L_13, NULL);
		return L_14;
	}
}
// UnityEngine.Pose UnityEngine.XR.Simulation.CameraFPSModeHandler::CalculateMovement(UnityEngine.Pose,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 CameraFPSModeHandler_CalculateMovement_m15769770001C584F3D187A1F40DA751F8FC727B8 (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose0, bool ___invertY1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var rotation = CalculateMouseRotation(pose.rotation, invertY);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___pose0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = L_0.___rotation_1;
		bool L_2 = ___invertY1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = CameraFPSModeHandler_CalculateMouseRotation_m2E6EC3AFE257E5F16B737CA881297E7A642858BC(__this, L_1, L_2, NULL);
		V_0 = L_3;
		// var position = pose.position + rotation.ConstrainYaw() * GetMovementDirection();
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = ___pose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___position_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = QuaternionExtensions_ConstrainYaw_m8564D6572C5D7169E9B48DEACBBA8E93EDBFABE7(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = CameraFPSModeHandler_GetMovementDirection_mB544A9C9E7CC2EB3545912094B2B5408489E72AB(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_5, L_9, NULL);
		V_1 = L_10;
		// if (useMovementBounds && movementBounds != default && !movementBounds.Contains(position))
		bool L_11;
		L_11 = CameraFPSModeHandler_get_useMovementBounds_m522FC0FC18B1AB816BCA068B23A59D6061B2C4D6_inline(__this, NULL);
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_12;
		L_12 = CameraFPSModeHandler_get_movementBounds_m520A841F99DD9C59CA0C08364151AFFD162DF6D6_inline(__this, NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_13 = V_2;
		bool L_14;
		L_14 = Bounds_op_Inequality_mCA10789889154806602C77822FA041863EBE4147(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_006a;
		}
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_15;
		L_15 = CameraFPSModeHandler_get_movementBounds_m520A841F99DD9C59CA0C08364151AFFD162DF6D6_inline(__this, NULL);
		V_2 = L_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		bool L_17;
		L_17 = Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555((&V_2), L_16, NULL);
		if (L_17)
		{
			goto IL_006a;
		}
	}
	{
		// position = movementBounds.ClosestPoint(position);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_18;
		L_18 = CameraFPSModeHandler_get_movementBounds_m520A841F99DD9C59CA0C08364151AFFD162DF6D6_inline(__this, NULL);
		V_2 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Bounds_ClosestPoint_m5BEB0BAC00387C354CF3C4D013442384122F24FC((&V_2), L_19, NULL);
		V_1 = L_20;
	}

IL_006a:
	{
		// return new Pose(position, rotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_23), L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// UnityEngine.Quaternion UnityEngine.XR.Simulation.CameraFPSModeHandler::CalculateMouseRotation(UnityEngine.Quaternion,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraFPSModeHandler_CalculateMouseRotation_m2E6EC3AFE257E5F16B737CA881297E7A642858BC (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, bool ___invertY1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (!m_Dragging)
		bool L_0 = __this->___m_Dragging_8;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rotation0;
		return L_1;
	}

IL_000a:
	{
		// var eulerAngles = rotation.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___rotation0), NULL);
		// var yaw = eulerAngles.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2;
		float L_4 = L_3.___y_3;
		V_0 = L_4;
		// var pitch = eulerAngles.x;
		float L_5 = L_3.___x_2;
		V_1 = L_5;
		// if (pitch > 180)
		float L_6 = V_1;
		if ((!(((float)L_6) > ((float)(180.0f)))))
		{
			goto IL_002e;
		}
	}
	{
		// pitch = pitch - 360;
		float L_7 = V_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_7, (360.0f)));
	}

IL_002e:
	{
		// var deltaY = m_MouseDelta.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___m_MouseDelta_6);
		float L_9 = L_8->___y_1;
		V_2 = L_9;
		// if (invertY)
		bool L_10 = ___invertY1;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		// deltaY *= -1;
		float L_11 = V_2;
		V_2 = ((float)il2cpp_codegen_multiply(L_11, (-1.0f)));
	}

IL_0045:
	{
		// yaw += m_MouseDelta.x * pixelsToDegrees;
		float L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___m_MouseDelta_6);
		float L_14 = L_13->___x_0;
		V_0 = ((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_multiply(L_14, (0.171887338f)))));
		// pitch += deltaY * pixelsToDegrees;
		float L_15 = V_1;
		float L_16 = V_2;
		V_1 = ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(L_16, (0.171887338f)))));
		// pitch = Mathf.Clamp(pitch, -k_PitchClamp, k_PitchClamp);
		float L_17 = V_1;
		float L_18;
		L_18 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_17, (-85.0f), (85.0f), NULL);
		V_1 = L_18;
		// return Quaternion.AngleAxis(yaw, Vector3.up) * Quaternion.AngleAxis(pitch, Vector3.right);
		float L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_19, L_20, NULL);
		float L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_22, L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_21, L_24, NULL);
		return L_25;
	}
}
// System.Void UnityEngine.XR.Simulation.CameraFPSModeHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFPSModeHandler__ctor_m9F5C2C1AA6BBCF2A5D84329711F3DE991F7A58DF (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Simulation.CameraPoseProvider::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPoseProvider_OnEnable_m9A5DDB2F9C64650C594240D3046B5307AFFE76C3 (CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// m_FPSModeHandler = new CameraFPSModeHandler();
		CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* L_1 = (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06*)il2cpp_codegen_object_new(CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CameraFPSModeHandler__ctor_m9F5C2C1AA6BBCF2A5D84329711F3DE991F7A58DF(L_1, NULL);
		__this->___m_FPSModeHandler_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FPSModeHandler_4), (void*)L_1);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Simulation.CameraPoseProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPoseProvider_Update_m76E830A42E24D665995D2B7F0F9B316012630567 (CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83* __this, const RuntimeMethod* method) 
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// m_FPSModeHandler.HandleGameInput();
		CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* L_1 = __this->___m_FPSModeHandler_4;
		NullCheck(L_1);
		CameraFPSModeHandler_HandleGameInput_mF86121EAD6D55BABB61F5C6B4B838D018F7F116F(L_1, NULL);
	}

IL_0012:
	{
		// var pose = m_FPSModeHandler.CalculateMovement(transform.GetWorldPose(), true);
		CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* L_2 = __this->___m_FPSModeHandler_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4;
		L_4 = TransformExtensions_GetWorldPose_m9D21B0564EA540CF54C761F9C73F77F37F146D4D(L_3, NULL);
		NullCheck(L_2);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
		L_5 = CameraFPSModeHandler_CalculateMovement_m15769770001C584F3D187A1F40DA751F8FC727B8(L_2, L_4, (bool)1, NULL);
		V_0 = L_5;
		// transform.SetWorldPose(pose);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7 = V_0;
		TransformExtensions_SetWorldPose_mBE5770AE0BD22C934198C8B2CF8DB9E165D758B2(L_6, L_7, NULL);
		// var newPose = transform.GetLocalPose();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = TransformExtensions_GetLocalPose_m8094B038D295D5EC653A1809E984A1426044CD88(L_8, NULL);
		V_1 = L_9;
		// SetCameraPose(newPose.position.x, newPose.position.y, newPose.position.z,
		//     newPose.rotation.x, newPose.rotation.y, newPose.rotation.z, newPose.rotation.w);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10.___position_0;
		float L_12 = L_11.___x_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13.___position_0;
		float L_15 = L_14.___y_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16.___position_0;
		float L_18 = L_17.___z_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = L_19.___rotation_1;
		float L_21 = L_20.___x_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = L_22.___rotation_1;
		float L_24 = L_23.___y_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_25 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = L_25.___rotation_1;
		float L_27 = L_26.___z_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_28 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = L_28.___rotation_1;
		float L_30 = L_29.___w_3;
		CameraPoseProvider_SetCameraPose_m76EFF325113D50F560ECD535F33F7F2B3E46A841(L_12, L_15, L_18, L_21, L_24, L_27, L_30, NULL);
		// }
		return;
	}
}
// UnityEngine.XR.Simulation.CameraPoseProvider UnityEngine.XR.Simulation.CameraPoseProvider::AddPoseProviderToScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83* CameraPoseProvider_AddPoseProviderToScene_m786E9834C47895D32EF4456640CEE914921F96ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectUtils_t11DAAEB6B091F1DEC4EC9B0D7B4A9B3F7CFAE72F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83_m0FE5C8352822CD4BB15B7010FD1FF8257048ED60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71AF3004AD3B24F008F2192E11D5CEDEF3793A42);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var go = GameObjectUtils.Create("CameraPoseProvider");
		il2cpp_codegen_runtime_class_init_inline(GameObjectUtils_t11DAAEB6B091F1DEC4EC9B0D7B4A9B3F7CFAE72F_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObjectUtils_Create_m62DFB2CA101FC3E009EF8DDCED70711BEE1C2EF2(_stringLiteral71AF3004AD3B24F008F2192E11D5CEDEF3793A42, NULL);
		// var cameraPoseProvider = go.AddComponent<CameraPoseProvider>();
		NullCheck(L_0);
		CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83* L_1;
		L_1 = GameObject_AddComponent_TisCameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83_m0FE5C8352822CD4BB15B7010FD1FF8257048ED60(L_0, GameObject_AddComponent_TisCameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83_m0FE5C8352822CD4BB15B7010FD1FF8257048ED60_RuntimeMethod_var);
		// return cameraPoseProvider;
		return L_1;
	}
}
// System.Void UnityEngine.XR.Simulation.CameraPoseProvider::SetCameraPose(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPoseProvider_SetCameraPose_m76EFF325113D50F560ECD535F33F7F2B3E46A841 (float ___pos_x0, float ___pos_y1, float ___pos_z2, float ___rot_x3, float ___rot_y4, float ___rot_z5, float ___rot_w6, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float, float, float, float, float, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_XRSimulationSubsystem_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("XRSimulationSubsystem"), "XRSimulationSubsystem_SetCameraPose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_XRSimulationSubsystem_INTERNAL
	reinterpret_cast<PInvokeFunc>(XRSimulationSubsystem_SetCameraPose)(___pos_x0, ___pos_y1, ___pos_z2, ___rot_x3, ___rot_y4, ___rot_z5, ___rot_w6);
	#else
	il2cppPInvokeFunc(___pos_x0, ___pos_y1, ___pos_z2, ___rot_x3, ___rot_y4, ___rot_z5, ___rot_w6);
	#endif

}
// System.Void UnityEngine.XR.Simulation.CameraPoseProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPoseProvider__ctor_m9510CDAF0412065AED0878530798B7A5EA933893 (CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Simulation.SimulationCameraSubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationCameraSubsystem_Register_mB418DE65C6A372BEFC140410FA153849F3B97890 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulationCameraSubsystem_t717F8F6DC17409C950E1DB8146BE6FFBB1E8AD73_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulationProvider_t39A9A6D22EE85EA8E482F2FBBF1A7B539D89FDB4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95679FAA9C52A87B684AE4F10FA10611659A350D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF21674C25F0FE72A37B948AFEA44B10AD4838D53);
		s_Il2CppMethodInitialized = true;
	}
	XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cInfo = new XRCameraSubsystemCinfo {
		//     id = k_SubsystemId,
		//     providerType = typeof(SimulationProvider),
		//     subsystemTypeOverride = typeof(SimulationCameraSubsystem),
		//     supportsCameraConfigurations = true,
		//     supportsCameraImage = true,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4));
		XRCameraSubsystemCinfo_set_id_m24A04B94756616FBA387977AF0F6A894D4DC5BCE_inline((&V_0), _stringLiteral95679FAA9C52A87B684AE4F10FA10611659A350D, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (SimulationProvider_t39A9A6D22EE85EA8E482F2FBBF1A7B539D89FDB4_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		XRCameraSubsystemCinfo_set_providerType_mFE0D3D8FEAF0FFEEA66D0E2C7CABB36944EAD484_inline((&V_0), L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (SimulationCameraSubsystem_t717F8F6DC17409C950E1DB8146BE6FFBB1E8AD73_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		XRCameraSubsystemCinfo_set_subsystemTypeOverride_m82AD4886D0CE8C4D762AC459630CBE13D024FCD2_inline((&V_0), L_3, NULL);
		XRCameraSubsystemCinfo_set_supportsCameraConfigurations_m5425AF5D348E1918644909C45ABA7220D2A8B92F_inline((&V_0), (bool)1, NULL);
		XRCameraSubsystemCinfo_set_supportsCameraImage_mC9312D97D6F2508F8692EF4C40909CBA55F6D769_inline((&V_0), (bool)1, NULL);
		XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4 L_4 = V_0;
		// if (!XRCameraSubsystem.Register(cInfo))
		bool L_5;
		L_5 = XRCameraSubsystem_Register_m6CA21A327BABC3CCAE1881ADBCEA4D7E2D5E18D4(L_4, NULL);
		if (L_5)
		{
			goto IL_0058;
		}
	}
	{
		// Debug.LogError("Cannot register the camera subsystem");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralF21674C25F0FE72A37B948AFEA44B10AD4838D53, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Simulation.SimulationCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationCameraSubsystem__ctor_mBFAF29117845B01D861114AC09227898ABDAD195 (SimulationCameraSubsystem_t717F8F6DC17409C950E1DB8146BE6FFBB1E8AD73* __this, const RuntimeMethod* method) 
{
	{
		XRCameraSubsystem__ctor_m1BE10CD8CF719A3400CFEF6AD97D8E025CA91504(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.Simulation.SimulationCameraSubsystem/SimulationProvider::get_permissionGranted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimulationProvider_get_permissionGranted_m09A52D0ED2FE8FF302531294E986D906D3E0F3C1 (SimulationProvider_t39A9A6D22EE85EA8E482F2FBBF1A7B539D89FDB4* __this, const RuntimeMethod* method) 
{
	{
		// public override bool permissionGranted => true;
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.Simulation.SimulationCameraSubsystem/SimulationProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationProvider__ctor_m9D2767E700307F870351622B930F051B294E97B4 (SimulationProvider_t39A9A6D22EE85EA8E482F2FBBF1A7B539D89FDB4* __this, const RuntimeMethod* method) 
{
	{
		Provider__ctor_mC30CBDE9E605D4DD1F82355FBC92F02272A9D132(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Simulation.SimulationSessionSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationSessionSubsystem_RegisterDescriptor_m9D66943F59E12366DF2CEA060DB94DD364FDB149 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulationProvider_t83E0CFA8DB3FCD0C7B18D124EDF7AC41505E0697_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulationSessionSubsystem_t958DFC3C8DD1D5FB59F91F75A3F289843A34C552_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47060314D0973CB0E2A355B4108C0FBAA064EA75);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// XRSessionSubsystemDescriptor.RegisterDescriptor(new XRSessionSubsystemDescriptor.Cinfo {
		//     id = k_SubsystemId,
		//     providerType = typeof(SimulationProvider),
		//     subsystemTypeOverride = typeof(SimulationSessionSubsystem),
		//     supportsInstall = false,
		//     supportsMatchFrameRate = false,
		// });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03));
		Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_inline((&V_0), _stringLiteral47060314D0973CB0E2A355B4108C0FBAA064EA75, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (SimulationProvider_t83E0CFA8DB3FCD0C7B18D124EDF7AC41505E0697_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_inline((&V_0), L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (SimulationSessionSubsystem_t958DFC3C8DD1D5FB59F91F75A3F289843A34C552_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_inline((&V_0), L_3, NULL);
		Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_inline((&V_0), (bool)0, NULL);
		Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_inline((&V_0), (bool)0, NULL);
		Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 L_4 = V_0;
		XRSessionSubsystemDescriptor_RegisterDescriptor_m3FBDE9F18337EA31F279277BD46E76C6511F3514(L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Simulation.SimulationSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationSessionSubsystem__ctor_m83AA521CD300ABDFC613979390690F11D9F84325 (SimulationSessionSubsystem_t958DFC3C8DD1D5FB59F91F75A3F289843A34C552* __this, const RuntimeMethod* method) 
{
	{
		XRSessionSubsystem__ctor_mB926772E21C65B0CBCE36FD4610CEC1B677999C8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.Simulation.SimulationSessionSubsystem/SimulationProvider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimulationProvider_get_trackingState_m3526E25927ECD3CF5F04B3D464FBBAC29942ED4B (SimulationProvider_t83E0CFA8DB3FCD0C7B18D124EDF7AC41505E0697* __this, const RuntimeMethod* method) 
{
	{
		// public override TrackingState trackingState => TrackingState.Tracking;
		return (int32_t)(2);
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.Simulation.SimulationSessionSubsystem/SimulationProvider::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* SimulationProvider_GetAvailabilityAsync_m676D6AA73FCDD80474D080E0023786C6258C7A46 (SimulationProvider_t83E0CFA8DB3FCD0C7B18D124EDF7AC41505E0697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_CreateResolvedPromise_mC52BEDF25401F49398E0E056B1A228F41F3A9A3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Promise<SessionAvailability>.CreateResolvedPromise(SessionAvailability.Installed | SessionAvailability.Supported);
		Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* L_0;
		L_0 = Promise_1_CreateResolvedPromise_mC52BEDF25401F49398E0E056B1A228F41F3A9A3E(6, Promise_1_CreateResolvedPromise_mC52BEDF25401F49398E0E056B1A228F41F3A9A3E_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void UnityEngine.XR.Simulation.SimulationSessionSubsystem/SimulationProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationProvider_Start_m5094FF9409BC4340A8C6B8F13824957C850EB3E5 (SimulationProvider_t83E0CFA8DB3FCD0C7B18D124EDF7AC41505E0697* __this, const RuntimeMethod* method) 
{
	{
		// m_CameraPoseProvider = CameraPoseProvider.AddPoseProviderToScene();
		CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83* L_0;
		L_0 = CameraPoseProvider_AddPoseProviderToScene_m786E9834C47895D32EF4456640CEE914921F96ED(NULL);
		__this->___m_CameraPoseProvider_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CameraPoseProvider_1), (void*)L_0);
		// SetupSimulation();
		SimulationProvider_SetupSimulation_m10422168055510E790C1EC2D6E9DE81F7DD1A36A(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Simulation.SimulationSessionSubsystem/SimulationProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationProvider_Stop_mEC917DABC2FA6A7142085F73890734F8B8B41453 (SimulationProvider_t83E0CFA8DB3FCD0C7B18D124EDF7AC41505E0697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ShutdownSimulation();
		SimulationProvider_ShutdownSimulation_mB2B0C8F566754B8C792631DCEA6D74880374481C(__this, NULL);
		// Object.Destroy(m_CameraPoseProvider.gameObject);
		CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83* L_0 = __this->___m_CameraPoseProvider_1;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_1, NULL);
		// m_CameraPoseProvider = null;
		__this->___m_CameraPoseProvider_1 = (CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CameraPoseProvider_1), (void*)(CameraPoseProvider_tB2B3AFEF58E85EB2B87DF34151E33FCEB2927A83*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Simulation.SimulationSessionSubsystem/SimulationProvider::SetupSimulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationProvider_SetupSimulation_m10422168055510E790C1EC2D6E9DE81F7DD1A36A (SimulationProvider_t83E0CFA8DB3FCD0C7B18D124EDF7AC41505E0697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D7E01B93889B940FC6102F955EA42D6629CB83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SimulationEnvironment = new GameObject("Simulation Environment Root");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral63D7E01B93889B940FC6102F955EA42D6629CB83, NULL);
		__this->___m_SimulationEnvironment_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SimulationEnvironment_2), (void*)L_0);
		// m_SimulationEnvironment.layer = 30; // TODO: Use settings
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_SimulationEnvironment_2;
		NullCheck(L_1);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_1, ((int32_t)30), NULL);
		// var cap1 = GameObject.CreatePrimitive(PrimitiveType.Capsule);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507(1, NULL);
		// cap1.transform.SetParent(m_SimulationEnvironment.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___m_SimulationEnvironment_2;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_4);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_4, L_6, NULL);
		// cap1.transform.localPosition = new Vector3(5, 0, 10);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (5.0f), (0.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
		// var cap2 = GameObject.CreatePrimitive(PrimitiveType.Capsule);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507(1, NULL);
		// cap2.transform.SetParent(m_SimulationEnvironment.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___m_SimulationEnvironment_2;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_11);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_11, L_13, NULL);
		// cap2.transform.localPosition = new Vector3(-5, 0, 10);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (-5.0f), (0.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Simulation.SimulationSessionSubsystem/SimulationProvider::ShutdownSimulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationProvider_ShutdownSimulation_mB2B0C8F566754B8C792631DCEA6D74880374481C (SimulationProvider_t83E0CFA8DB3FCD0C7B18D124EDF7AC41505E0697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Object.Destroy(m_SimulationEnvironment);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_SimulationEnvironment_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// m_SimulationEnvironment = null;
		__this->___m_SimulationEnvironment_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SimulationEnvironment_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Simulation.SimulationSessionSubsystem/SimulationProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimulationProvider__ctor_mDEB709F055F19B514DF4E1B982FEC547864046D5 (SimulationProvider_t83E0CFA8DB3FCD0C7B18D124EDF7AC41505E0697* __this, const RuntimeMethod* method) 
{
	{
		Provider__ctor_m43661C1B8B6373D456C0CDA35F96AACBAB01290A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* Keyboard_get_current_mD50C8345E6C992062CBFBE4A9E81C93FFF476016_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Keyboard current { get; private set; }
		Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* L_0 = ((Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_StaticFields*)il2cpp_codegen_static_fields_for(Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43_il2cpp_TypeInfo_var))->___U3CcurrentU3Ek__BackingField_45;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* Keyboard_get_shiftKey_mEED4FE9A52F97B3646039BEEF88FE35207FD1379_inline (Keyboard_t015BD1A6508137D20B4395295F6E002773FAAF43* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl shiftKey { get; protected set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CshiftKeyU3Ek__BackingField_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* Mouse_get_current_m559AE408DFE4F44D811979FE592BBAF7A84CE6F3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public new static Mouse current { get; private set; }
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_0 = ((Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var))->___U3CcurrentU3Ek__BackingField_52;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* Pointer_get_position_m4286004169788483EEDA6AF833CEFDB04FEDF3D8_inline (Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Control position { get; protected set; }
		Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* L_0 = __this->___U3CpositionU3Ek__BackingField_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* Mouse_get_rightButton_mFA0FD700624C0DE1B858F9516426414767F09D98_inline (Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl rightButton { get; protected set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CrightButtonU3Ek__BackingField_48;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFPSModeHandler_set_moveActive_mE49A905DF30BEAA2F98899F50F572105E0AC895F_inline (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool moveActive { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CmoveActiveU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraFPSModeHandler_get_useMovementBounds_m522FC0FC18B1AB816BCA068B23A59D6061B2C4D6_inline (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, const RuntimeMethod* method) 
{
	{
		// public bool useMovementBounds { get; set; }
		bool L_0 = __this->___U3CuseMovementBoundsU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 CameraFPSModeHandler_get_movementBounds_m520A841F99DD9C59CA0C08364151AFFD162DF6D6_inline (CameraFPSModeHandler_t2A3AB27A8742EF62C97F0674F90056EF944DCC06* __this, const RuntimeMethod* method) 
{
	{
		// public Bounds movementBounds { get; set; }
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = __this->___U3CmovementBoundsU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_m24A04B94756616FBA387977AF0F6A894D4DC5BCE_inline (XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_providerType_mFE0D3D8FEAF0FFEEA66D0E2C7CABB36944EAD484_inline (XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_subsystemTypeOverride_m82AD4886D0CE8C4D762AC459630CBE13D024FCD2_inline (XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraConfigurations_m5425AF5D348E1918644909C45ABA7220D2A8B92F_inline (XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool supportsCameraConfigurations { get; set; }
		bool L_0 = ___value0;
		__this->___U3CsupportsCameraConfigurationsU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraImage_mC9312D97D6F2508F8692EF4C40909CBA55F6D769_inline (XRCameraSubsystemCinfo_t0DFE510C0086C1A7F2C9470F027B18FA445248D4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool supportsCameraImage { get; set; }
		bool L_0 = ___value0;
		__this->___U3CsupportsCameraImageU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CproviderTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->___U3CsupportsInstallU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___value0;
		__this->___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}

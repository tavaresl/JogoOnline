//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.10.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "UClass.Generated.h"



#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )
#endif

namespace JetBrains {
namespace EditorPlugin {
// companion
// constants
// initializer
void UClass::initialize()
{
}
// primary ctor
UClass::UClass(FString name_) :
rd::IPolymorphicSerializable()
,name_(std::move(name_))
{
    initialize();
}
// secondary constructor
// default ctors and dtors
// reader
UClass UClass::read(rd::SerializationCtx& ctx, rd::Buffer & buffer)
{
    auto name_ = rd::Polymorphic<FString>::read(ctx, buffer);
    UClass res{std::move(name_)};
    return res;
}
// writer
void UClass::write(rd::SerializationCtx& ctx, rd::Buffer& buffer) const
{
    rd::Polymorphic<std::decay_t<decltype(name_)>>::write(ctx, buffer, name_);
}
// virtual init
// identify
// getters
FString const & UClass::get_name() const
{
    return name_;
}
// intern
// equals trait
bool UClass::equals(rd::ISerializable const& object) const
{
    auto const &other = dynamic_cast<UClass const&>(object);
    if (this == &other) return true;
    if (this->name_ != other.name_) return false;
    
    return true;
}
// equality operators
bool operator==(const UClass &lhs, const UClass &rhs) {
    if (lhs.type_name() != rhs.type_name()) return false;
    return lhs.equals(rhs);
}
bool operator!=(const UClass &lhs, const UClass &rhs){
    return !(lhs == rhs);
}
// hash code trait
size_t UClass::hashCode() const noexcept
{
    size_t __r = 0;
    __r = __r * 31 + (rd::hash<FString>()(get_name()));
    return __r;
}
// type name trait
std::string UClass::type_name() const
{
    return "UClass";
}
// static type name trait
std::string UClass::static_type_name()
{
    return "UClass";
}
// polymorphic to string
std::string UClass::toString() const
{
    std::string res = "UClass\n";
    res += "\tname = ";
    res += rd::to_string(name_);
    res += '\n';
    return res;
}
// external to string
std::string to_string(const UClass & value)
{
    return value.toString();
}
}
}

#ifdef _MSC_VER
#pragma warning( pop )
#endif


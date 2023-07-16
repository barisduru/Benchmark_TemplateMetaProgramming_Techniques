#pragma once

template<typename ...>
struct list{};

namespace peace{

	//lazy version of std::conditional
	template<bool Condition>
	struct if_{
		template<typename Then, typename Else>
		using g = Then;
	};
	template<>
	struct if_<false>{
		template<typename Then, typename Else>
		using g = Else;
	};


	template<typename Container,typename T>
	struct push_back;

	template<template<typename ...>class Container,typename T,typename ...Ts>
	struct push_back<Container<Ts...>,T>{
		using type = Container<Ts...,T>;
	};

	template<typename Container,typename T>
	using push_back_t = typename push_back<Container,T>::type;




}//namespace peace

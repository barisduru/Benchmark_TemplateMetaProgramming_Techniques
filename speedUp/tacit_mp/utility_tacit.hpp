#pragma once

#include "../../include/utility.hpp"

#include <type_traits>

struct identity{
	template<typename T>
	using g = T;
};

struct listify{
	template<typename ...Ts>
	using g = list<Ts...>;
};

namespace details{

	static constexpr unsigned find_dispatch(unsigned num){
		return num <= 8 ? 1
							: num <= 16 ? 2
							: num <= 32 ? 3
							: num <= 64 ? 4
							: num <= 128 ? 5
							: 6;
	}
	
	template<unsigned n>
	struct join_select;

	// join8
	template<>
	struct join_select<1>{
		template< template<typename ...>class, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<> > 
		struct g;
		template< template<typename ...>class C, 
				  typename ...T0s, typename ...T1s, typename ...T2s, typename ...T3s, typename ...T4s, typename ...T5s, typename ...T6s, typename ...T7s >
		struct g< C, list<T0s...>, list<T1s...>, list<T2s...>, list<T3s...>, list<T4s...>, list<T5s...>, list<T6s...>, list<T7s...> >{
			using type = C< T0s..., T1s..., T2s..., T3s..., T4s..., T5s..., T6s...,T7s... >;
		};//type
	};//join8

	// join16
	template<>
	struct join_select<2>{
		template< template<typename ...>class, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<> > 
		struct g;
		template< template<typename ...>class C, 
				  typename ...T0s, typename ...T1s, typename ...T2s, typename ...T3s, typename ...T4s, typename ...T5s, typename ...T6s, typename ...T7s,
				  typename ...T8s, typename ...T9s, typename ...T10s, typename ...T11s, typename ...T12s, typename ...T13s, typename ...T14s, typename ...T15s >
		struct g< C, list<T0s...>, list<T1s...>, list<T2s...>, list<T3s...>, list<T4s...>, list<T5s...>, list<T6s...>, list<T7s...>, 
					 list<T8s...>, list<T9s...>, list<T10s...>, list<T11s...>, list<T12s...>, list<T13s...>, list<T14s...>, list<T15s...> >{
			using type = C< T0s..., T1s..., T2s..., T3s..., T4s..., T5s..., T6s...,T7s...,
							T8s..., T9s..., T10s..., T11s..., T12s..., T13s..., T14s...,T15s... >;
		};//type
	};//join16
	
	// join32
	template<>
	struct join_select<3>{
		template< template<typename ...>class, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<> > 
		struct g;
		template< template<typename ...>class C, 
				  typename ...T0s, typename ...T1s, typename ...T2s, typename ...T3s, typename ...T4s, typename ...T5s, typename ...T6s, typename ...T7s,
				  typename ...T8s, typename ...T9s, typename ...T10s, typename ...T11s, typename ...T12s, typename ...T13s, typename ...T14s, typename ...T15s, 
				  typename ...T16s, typename ...T17s, typename ...T18s, typename ...T19s, typename ...T20s, typename ...T21s, typename ...T22s, typename ...T23s,
				  typename ...T24s, typename ...T25s, typename ...T26s, typename ...T27s, typename ...T28s, typename ...T29s, typename ...T30s, typename ...T31s >
		struct g< C, list<T0s...>, list<T1s...>, list<T2s...>, list<T3s...>, list<T4s...>, list<T5s...>, list<T6s...>, list<T7s...>, 
					 list<T8s...>, list<T9s...>, list<T10s...>, list<T11s...>, list<T12s...>, list<T13s...>, list<T14s...>, list<T15s...>,
					 list<T16s...>, list<T17s...>, list<T18s...>, list<T19s...>, list<T20s...>, list<T21s...>, list<T22s...>, list<T23s...>,
					 list<T24s...>, list<T25s...>, list<T26s...>, list<T27s...>, list<T28s...>, list<T29s...>, list<T30s...>, list<T31s...> >{
			using type = C< T0s..., T1s..., T2s..., T3s..., T4s..., T5s..., T6s...,T7s...,
							T8s..., T9s..., T10s..., T11s..., T12s..., T13s..., T14s...,T15s...,
							T16s..., T17s..., T18s..., T19s..., T20s..., T21s..., T22s...,T23s...,
							T24s..., T25s..., T26s..., T27s..., T28s..., T29s..., T30s...,T31s... >;
		};//type
	};//join32

	//join64
	template<>
	struct join_select<4>{
		template< template<typename ...>class, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<> > 
		struct g;
		template< template<typename ...>class C, 
				  typename ...T0s, typename ...T1s, typename ...T2s, typename ...T3s, typename ...T4s, typename ...T5s, typename ...T6s, typename ...T7s,
				  typename ...T8s, typename ...T9s, typename ...T10s, typename ...T11s, typename ...T12s, typename ...T13s, typename ...T14s, typename ...T15s, 
				  typename ...T16s, typename ...T17s, typename ...T18s, typename ...T19s, typename ...T20s, typename ...T21s, typename ...T22s, typename ...T23s,
				  typename ...T24s, typename ...T25s, typename ...T26s, typename ...T27s, typename ...T28s, typename ...T29s, typename ...T30s, typename ...T31s,
				  typename ...T32s, typename ...T33s, typename ...T34s, typename ...T35s, typename ...T36s, typename ...T37s, typename ...T38s, typename ...T39s,
				  typename ...T40s, typename ...T41s, typename ...T42s, typename ...T43s, typename ...T44s, typename ...T45s, typename ...T46s, typename ...T47s,
				  typename ...T48s, typename ...T49s, typename ...T50s, typename ...T51s, typename ...T52s, typename ...T53s, typename ...T54s, typename ...T55s,
				  typename ...T56s, typename ...T57s, typename ...T58s, typename ...T59s, typename ...T60s, typename ...T61s, typename ...T62s, typename ...T63s >
		struct g< C, list<T0s...>, list<T1s...>, list<T2s...>, list<T3s...>, list<T4s...>, list<T5s...>, list<T6s...>, list<T7s...>, 
					 list<T8s...>, list<T9s...>, list<T10s...>, list<T11s...>, list<T12s...>, list<T13s...>, list<T14s...>, list<T15s...>,
					 list<T16s...>, list<T17s...>, list<T18s...>, list<T19s...>, list<T20s...>, list<T21s...>, list<T22s...>, list<T23s...>,
					 list<T24s...>, list<T25s...>, list<T26s...>, list<T27s...>, list<T28s...>, list<T29s...>, list<T30s...>, list<T31s...>,
					 list<T32s...>, list<T33s...>, list<T34s...>, list<T35s...>, list<T36s...>, list<T37s...>, list<T38s...>, list<T39s...>,
					 list<T40s...>, list<T41s...>, list<T42s...>, list<T43s...>, list<T44s...>, list<T45s...>, list<T46s...>, list<T47s...>,
					 list<T48s...>, list<T49s...>, list<T50s...>, list<T51s...>, list<T52s...>, list<T53s...>, list<T54s...>, list<T55s...>,
					 list<T56s...>, list<T57s...>, list<T58s...>, list<T59s...>, list<T60s...>, list<T61s...>, list<T62s...>, list<T63s...> >{
			using type = C< T0s..., T1s..., T2s..., T3s..., T4s..., T5s..., T6s...,T7s...,
							T8s..., T9s..., T10s..., T11s..., T12s..., T13s..., T14s...,T15s...,
							T16s..., T17s..., T18s..., T19s..., T20s..., T21s..., T22s...,T23s...,
							T24s..., T25s..., T26s..., T27s..., T28s..., T29s..., T30s...,T31s...,
							T32s..., T33s..., T34s..., T35s..., T36s..., T37s..., T38s...,T39s...,
							T40s..., T41s..., T42s..., T43s..., T44s..., T45s..., T46s...,T47s...,
							T48s..., T49s..., T50s..., T51s..., T52s..., T53s..., T54s...,T55s...,
							T56s..., T57s..., T58s..., T59s..., T60s..., T61s..., T62s...,T63s... >;
		};//type
	};//join64

	// join128
	template<>
	struct join_select<5>{
		template< template<typename ...>class, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<> > 
		struct g;
		template< template<typename ...>class C, 
				  typename ...T0s, typename ...T1s, typename ...T2s, typename ...T3s, typename ...T4s, typename ...T5s, typename ...T6s, typename ...T7s,
				  typename ...T8s, typename ...T9s, typename ...T10s, typename ...T11s, typename ...T12s, typename ...T13s, typename ...T14s, typename ...T15s, 
				  typename ...T16s, typename ...T17s, typename ...T18s, typename ...T19s, typename ...T20s, typename ...T21s, typename ...T22s, typename ...T23s,
				  typename ...T24s, typename ...T25s, typename ...T26s, typename ...T27s, typename ...T28s, typename ...T29s, typename ...T30s, typename ...T31s,
				  typename ...T32s, typename ...T33s, typename ...T34s, typename ...T35s, typename ...T36s, typename ...T37s, typename ...T38s, typename ...T39s,
				  typename ...T40s, typename ...T41s, typename ...T42s, typename ...T43s, typename ...T44s, typename ...T45s, typename ...T46s, typename ...T47s,
				  typename ...T48s, typename ...T49s, typename ...T50s, typename ...T51s, typename ...T52s, typename ...T53s, typename ...T54s, typename ...T55s,
				  typename ...T56s, typename ...T57s, typename ...T58s, typename ...T59s, typename ...T60s, typename ...T61s, typename ...T62s, typename ...T63s, 
				  typename ...T64s, typename ...T65s, typename ...T66s, typename ...T67s, typename ...T68s, typename ...T69s, typename ...T70s, typename ...T71s,
				  typename ...T72s, typename ...T73s, typename ...T74s, typename ...T75s, typename ...T76s, typename ...T77s, typename ...T78s, typename ...T79s,
				  typename ...T80s, typename ...T81s, typename ...T82s, typename ...T83s, typename ...T84s, typename ...T85s, typename ...T86s, typename ...T87s,
				  typename ...T88s, typename ...T89s, typename ...T90s, typename ...T91s, typename ...T92s, typename ...T93s, typename ...T94s, typename ...T95s,
				  typename ...T96s, typename ...T97s, typename ...T98s, typename ...T99s, typename ...T100s, typename ...T101s, typename ...T102s, typename ...T103s,
				  typename ...T104s, typename ...T105s, typename ...T106s, typename ...T107s, typename ...T108s, typename ...T109s, typename ...T110s, typename ...T111s,
				  typename ...T112s, typename ...T113s, typename ...T114s, typename ...T115s, typename ...T116s, typename ...T117s, typename ...T118s, typename ...T119s,
				  typename ...T120s, typename ...T121s, typename ...T122s, typename ...T123s, typename ...T124s, typename ...T125s, typename ...T126s, typename ...T127s >
		struct g< C, list<T0s...>, list<T1s...>, list<T2s...>, list<T3s...>, list<T4s...>, list<T5s...>, list<T6s...>, list<T7s...>, 
					 list<T8s...>, list<T9s...>, list<T10s...>, list<T11s...>, list<T12s...>, list<T13s...>, list<T14s...>, list<T15s...>,
					 list<T16s...>, list<T17s...>, list<T18s...>, list<T19s...>, list<T20s...>, list<T21s...>, list<T22s...>, list<T23s...>,
					 list<T24s...>, list<T25s...>, list<T26s...>, list<T27s...>, list<T28s...>, list<T29s...>, list<T30s...>, list<T31s...>,
					 list<T32s...>, list<T33s...>, list<T34s...>, list<T35s...>, list<T36s...>, list<T37s...>, list<T38s...>, list<T39s...>,
					 list<T40s...>, list<T41s...>, list<T42s...>, list<T43s...>, list<T44s...>, list<T45s...>, list<T46s...>, list<T47s...>,
					 list<T48s...>, list<T49s...>, list<T50s...>, list<T51s...>, list<T52s...>, list<T53s...>, list<T54s...>, list<T55s...>,
					 list<T56s...>, list<T57s...>, list<T58s...>, list<T59s...>, list<T60s...>, list<T61s...>, list<T62s...>, list<T63s...>,
					 list<T64s...>, list<T65s...>, list<T66s...>, list<T67s...>, list<T68s...>, list<T69s...>, list<T70s...>, list<T71s...>,
					 list<T72s...>, list<T73s...>, list<T74s...>, list<T75s...>, list<T76s...>, list<T77s...>, list<T78s...>, list<T79s...>,
					 list<T80s...>, list<T81s...>, list<T82s...>, list<T83s...>, list<T84s...>, list<T85s...>, list<T86s...>, list<T87s...>,
					 list<T88s...>, list<T89s...>, list<T90s...>, list<T91s...>, list<T92s...>, list<T93s...>, list<T94s...>, list<T95s...>,
					 list<T96s...>, list<T97s...>, list<T98s...>, list<T99s...>, list<T100s...>, list<T101s...>, list<T102s...>, list<T103s...>,
					 list<T104s...>, list<T105s...>, list<T106s...>, list<T107s...>, list<T108s...>, list<T109s...>, list<T110s...>, list<T111s...>,
					 list<T112s...>, list<T113s...>, list<T114s...>, list<T115s...>, list<T116s...>, list<T117s...>, list<T118s...>, list<T119s...>,
					 list<T120s...>, list<T121s...>, list<T122s...>, list<T123s...>, list<T124s...>, list<T125s...>, list<T126s...>, list<T127s...> >{
			using type = C< T0s..., T1s..., T2s..., T3s..., T4s..., T5s..., T6s...,T7s...,
							T8s..., T9s..., T10s..., T11s..., T12s..., T13s..., T14s...,T15s...,
							T16s..., T17s..., T18s..., T19s..., T20s..., T21s..., T22s...,T23s...,
							T24s..., T25s..., T26s..., T27s..., T28s..., T29s..., T30s...,T31s...,
							T32s..., T33s..., T34s..., T35s..., T36s..., T37s..., T38s...,T39s...,
							T40s..., T41s..., T42s..., T43s..., T44s..., T45s..., T46s...,T47s...,
							T48s..., T49s..., T50s..., T51s..., T52s..., T53s..., T54s...,T55s...,
							T56s..., T57s..., T58s..., T59s..., T60s..., T61s..., T62s...,T63s...,
							T64s..., T65s..., T66s..., T67s..., T68s..., T69s..., T70s...,T71s...,
							T72s..., T73s..., T74s..., T75s..., T76s..., T77s..., T78s...,T79s...,
							T80s..., T81s..., T82s..., T83s..., T84s..., T85s..., T86s...,T87s...,
							T88s..., T89s..., T90s..., T91s..., T92s..., T93s..., T94s...,T95s...,
							T96s..., T97s..., T98s..., T99s..., T100s..., T101s..., T102s...,T103s...,
							T104s..., T105s..., T106s..., T107s..., T108s..., T109s..., T110s...,T111s...,
							T112s..., T113s..., T114s..., T115s..., T116s..., T117s..., T118s...,T119s...,
							T120s..., T121s..., T122s..., T123s..., T124s..., T125s..., T126s...,T127s... >;
		};//type
	};//join128

	// join 128+...
	template<>
	struct join_select<6>{
		template< template<typename ...>class C, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>, 
				  typename = list<>, typename = list<>, typename = list<>,typename = list<>, typename = list<>, typename = list<>, typename = list<>, typename = list<>,
				  typename ... TAIL_LISTS> 
		struct g;
		template< template<typename ...>class C,
				  typename ...T0s, typename ...T1s, typename ...T2s, typename ...T3s, typename ...T4s, typename ...T5s, typename ...T6s, typename ...T7s,
				  typename ...T8s, typename ...T9s, typename ...T10s, typename ...T11s, typename ...T12s, typename ...T13s, typename ...T14s, typename ...T15s, 
				  typename ...T16s, typename ...T17s, typename ...T18s, typename ...T19s, typename ...T20s, typename ...T21s, typename ...T22s, typename ...T23s,
				  typename ...T24s, typename ...T25s, typename ...T26s, typename ...T27s, typename ...T28s, typename ...T29s, typename ...T30s, typename ...T31s,
				  typename ...T32s, typename ...T33s, typename ...T34s, typename ...T35s, typename ...T36s, typename ...T37s, typename ...T38s, typename ...T39s,
				  typename ...T40s, typename ...T41s, typename ...T42s, typename ...T43s, typename ...T44s, typename ...T45s, typename ...T46s, typename ...T47s,
				  typename ...T48s, typename ...T49s, typename ...T50s, typename ...T51s, typename ...T52s, typename ...T53s, typename ...T54s, typename ...T55s,
				  typename ...T56s, typename ...T57s, typename ...T58s, typename ...T59s, typename ...T60s, typename ...T61s, typename ...T62s, typename ...T63s, 
				  typename ...T64s, typename ...T65s, typename ...T66s, typename ...T67s, typename ...T68s, typename ...T69s, typename ...T70s, typename ...T71s,
				  typename ...T72s, typename ...T73s, typename ...T74s, typename ...T75s, typename ...T76s, typename ...T77s, typename ...T78s, typename ...T79s,
				  typename ...T80s, typename ...T81s, typename ...T82s, typename ...T83s, typename ...T84s, typename ...T85s, typename ...T86s, typename ...T87s,
				  typename ...T88s, typename ...T89s, typename ...T90s, typename ...T91s, typename ...T92s, typename ...T93s, typename ...T94s, typename ...T95s,
				  typename ...T96s, typename ...T97s, typename ...T98s, typename ...T99s, typename ...T100s, typename ...T101s, typename ...T102s, typename ...T103s,
				  typename ...T104s, typename ...T105s, typename ...T106s, typename ...T107s, typename ...T108s, typename ...T109s, typename ...T110s, typename ...T111s,
				  typename ...T112s, typename ...T113s, typename ...T114s, typename ...T115s, typename ...T116s, typename ...T117s, typename ...T118s, typename ...T119s,
				  typename ...T120s, typename ...T121s, typename ...T122s, typename ...T123s, typename ...T124s, typename ...T125s, typename ...T126s, typename ...T127s,
				  typename ... TAIL_LISTS>
		struct g< C, list<T0s...>, list<T1s...>, list<T2s...>, list<T3s...>, list<T4s...>, list<T5s...>, list<T6s...>, list<T7s...>, 
					 list<T8s...>, list<T9s...>, list<T10s...>, list<T11s...>, list<T12s...>, list<T13s...>, list<T14s...>, list<T15s...>,
					 list<T16s...>, list<T17s...>, list<T18s...>, list<T19s...>, list<T20s...>, list<T21s...>, list<T22s...>, list<T23s...>,
					 list<T24s...>, list<T25s...>, list<T26s...>, list<T27s...>, list<T28s...>, list<T29s...>, list<T30s...>, list<T31s...>,
					 list<T32s...>, list<T33s...>, list<T34s...>, list<T35s...>, list<T36s...>, list<T37s...>, list<T38s...>, list<T39s...>,
					 list<T40s...>, list<T41s...>, list<T42s...>, list<T43s...>, list<T44s...>, list<T45s...>, list<T46s...>, list<T47s...>,
					 list<T48s...>, list<T49s...>, list<T50s...>, list<T51s...>, list<T52s...>, list<T53s...>, list<T54s...>, list<T55s...>,
					 list<T56s...>, list<T57s...>, list<T58s...>, list<T59s...>, list<T60s...>, list<T61s...>, list<T62s...>, list<T63s...>,
					 list<T64s...>, list<T65s...>, list<T66s...>, list<T67s...>, list<T68s...>, list<T69s...>, list<T70s...>, list<T71s...>,
					 list<T72s...>, list<T73s...>, list<T74s...>, list<T75s...>, list<T76s...>, list<T77s...>, list<T78s...>, list<T79s...>,
					 list<T80s...>, list<T81s...>, list<T82s...>, list<T83s...>, list<T84s...>, list<T85s...>, list<T86s...>, list<T87s...>,
					 list<T88s...>, list<T89s...>, list<T90s...>, list<T91s...>, list<T92s...>, list<T93s...>, list<T94s...>, list<T95s...>,
					 list<T96s...>, list<T97s...>, list<T98s...>, list<T99s...>, list<T100s...>, list<T101s...>, list<T102s...>, list<T103s...>,
					 list<T104s...>, list<T105s...>, list<T106s...>, list<T107s...>, list<T108s...>, list<T109s...>, list<T110s...>, list<T111s...>,
					 list<T112s...>, list<T113s...>, list<T114s...>, list<T115s...>, list<T116s...>, list<T117s...>, list<T118s...>, list<T119s...>,
					 list<T120s...>, list<T121s...>, list<T122s...>, list<T123s...>, list<T124s...>, list<T125s...>, list<T126s...>, list<T127s...>,
					 TAIL_LISTS...>{
			using type = typename join_select<find_dispatch(sizeof...(TAIL_LISTS) + 1)>::template g<
						 C< T0s..., T1s..., T2s..., T3s..., T4s..., T5s..., T6s...,T7s...,
							T8s..., T9s..., T10s..., T11s..., T12s..., T13s..., T14s...,T15s...,
							T16s..., T17s..., T18s..., T19s..., T20s..., T21s..., T22s...,T23s...,
							T24s..., T25s..., T26s..., T27s..., T28s..., T29s..., T30s...,T31s...,
							T32s..., T33s..., T34s..., T35s..., T36s..., T37s..., T38s...,T39s...,
							T40s..., T41s..., T42s..., T43s..., T44s..., T45s..., T46s...,T47s...,
							T48s..., T49s..., T50s..., T51s..., T52s..., T53s..., T54s...,T55s...,
							T56s..., T57s..., T58s..., T59s..., T60s..., T61s..., T62s...,T63s...,
							T64s..., T65s..., T66s..., T67s..., T68s..., T69s..., T70s...,T71s...,
							T72s..., T73s..., T74s..., T75s..., T76s..., T77s..., T78s...,T79s...,
							T80s..., T81s..., T82s..., T83s..., T84s..., T85s..., T86s...,T87s...,
							T88s..., T89s..., T90s..., T91s..., T92s..., T93s..., T94s...,T95s...,
							T96s..., T97s..., T98s..., T99s..., T100s..., T101s..., T102s...,T103s...,
							T104s..., T105s..., T106s..., T107s..., T108s..., T109s..., T110s...,T111s...,
							T112s..., T113s..., T114s..., T115s..., T116s..., T117s..., T118s...,T119s...,
							T120s..., T121s..., T122s..., T123s..., T124s..., T125s..., T126s...,T127s... >,
							TAIL_LISTS...>::type;
		};//type
	};//join128++


	template<typename C = listify>
	struct join{
		template<typename ...Ts>
		static constexpr unsigned join_size = find_dispatch(sizeof...(Ts));
		template<typename ...Ts>
		using g = typename join_select<join_size<Ts...>>::template g<C::template g, Ts...>::type;
	};

	template<typename PREDICATE, typename CONTINUATION = identity>
	struct wrap_if_not{
		template<typename T>
		using g = typename CONTINUATION::template g<
													typename peace::if_<!PREDICATE::template value<T>>::template g<list<T>, list<>>
												   >;
	};
	// unpacking	
	template<typename CONTINUATION, typename LIST>
	struct unpack_impl;
	template<typename CONTINUATION, template<typename ...>class LIST, typename ...ELEMS>
	struct unpack_impl<CONTINUATION,LIST<ELEMS...>>{
		using type = typename CONTINUATION::template g<ELEMS...>;
	};

}//namespace details

/// unpacks a LIST-like type (basically any template using typename parameters) passing its elements to the given continuation
template<typename CONTINUATION>
struct unpack{
	template<typename LIST>
	using g = typename details::unpack_impl<CONTINUATION,LIST>::type;
};

// Convert eager predicate to lazy predicate
template<template<typename ...>class PREDICATE>
struct to_lazy_predicate{
	template<typename ...Ts>
	static constexpr bool value = PREDICATE<Ts...>::value;
};

// transform
/// Apply the given FUNCTION to each element of the parameter pack. FUNCTION should be a continuation
template<typename FUNCTION, typename CONTINUATION = listify>
struct transform{
	template<typename ...Ts>
	using g = typename CONTINUATION::template g<typename FUNCTION::template g<Ts>...>;
};

// remove if
/// Removes any types for which PREDICATE evaluates to true from the parameter pack. Passing the resulting parameter pack to the continuation
template<typename PREDICATE, typename CONTINUATION = listify>
struct remove_if{
	template<typename ...Ts>
	using g = typename transform<details::wrap_if_not<PREDICATE>,details::join<CONTINUATION>>::template g<Ts...>;
};


static_assert(std::is_same_v<unpack<remove_if<to_lazy_predicate<std::is_void>>>::template g<list<void,int,bool,int,void,float>>,list<int,bool,int,float>>,"");
static_assert(std::is_same_v<unpack<remove_if<to_lazy_predicate<std::is_void>>>::template g<list<void,int,bool,int,void,float,bool,bool,int,int,float,float,void,void,bool,bool,int,float,double,void,void,double>>,
										list<int,bool,int,float,bool,bool,int,int,float,float,bool,bool,int,float,double,double>>,"");





set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


metabench_add_dataset(speedup.if_type if_comp/if_type.cpp.erb  "(0...600).step(20)" NAME "std::conditional" MEDIAN_OF 3)
metabench_add_dataset(speedup.if_alias if_comp/if_alias.cpp.erb  "(0...600).step(20)" NAME "if_alias" MEDIAN_OF 3)
metabench_add_chart(speedup.if_comp
	TITLE "Comparison of type and alias instantiation by conditional"
    SUBTITLE "(smaller is better)"
	XLABEL "Number of Types"
	YLABEL "Time"
    DATASETS speedup.if_type speedup.if_alias
)

add_custom_target(if_comp ALL DEPENDS speedup.if_comp)


metabench_add_dataset(speedup.eager eager_vs_lazy/eager_remove_if.cpp.erb  "(6...20).step(2)" NAME "eager")
metabench_add_dataset(speedup.lazy eager_vs_lazy/lazy_remove_if.cpp.erb  "(6...40).step(2)" NAME "lazy")
metabench_add_chart(speedup.eager_lazy_comp
	TITLE "Comparison of eager and lazy"
    SUBTITLE "(smaller is better)"
	XLABEL "Number of Types"
	YLABEL "Time"
    DATASETS speedup.eager speedup.lazy
)

add_custom_target(eager_lazy_comp ALL DEPENDS speedup.eager_lazy_comp)

metabench_add_dataset(speedup.fast_tracking_with_dispatch fast_tracking_with_dispatch/fast_tracking.cpp.erb  "(10...1010).step(50)" NAME "fast_tracking_with_dispatch")
metabench_add_dataset(speedup.lazy_uplimit eager_vs_lazy/lazy_remove_if.cpp.erb  "(10...1010).step(50)" NAME "lazy_uplimit")
metabench_add_chart(speedup.fast_tracking_comp
	TITLE "Effect of fast_tracking and selection mechanism"
    SUBTITLE "(smaller is better)"
	XLABEL "Number of Types"
	YLABEL "Time"
    DATASETS speedup.lazy_uplimit speedup.fast_tracking_with_dispatch
)

add_custom_target(fast_tracking_selection_default_comp ALL DEPENDS speedup.fast_tracking_comp)

metabench_add_dataset(speedup.fast_tracking_with_dispatch_tacit fast_tracking_with_dispatch/fast_tracking.cpp.erb  "(10...1010).step(50)" NAME "fast_tracking_with_dispatch" MEDIAN_OF 3)
metabench_add_dataset(speedup.tacit_metaprogramming tacit_mp/tacit_mp.cpp.erb  "(10...1010).step(50)" NAME "tacit_metaprogramming" MEDIAN_OF 3)
metabench_add_chart(speedup.tacit_comp
	TITLE "Effect of Tacit Style Metaprogramming"
    SUBTITLE "(smaller is better)"
	XLABEL "Number of Types"
	YLABEL "Time"
    DATASETS speedup.fast_tracking_with_dispatch_tacit speedup.tacit_metaprogramming
)

add_custom_target(tacit_vs_fast_tracking_selection ALL DEPENDS speedup.tacit_comp)




# CMake generated Testfile for 
# Source directory: /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp
# Build directory: /home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/speedUp
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(speedup.if_type "/usr/bin/ruby" "-r" "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/_metabench/metabench.rb" "-e" "range = ((0...600).step(20)).to_a" "-e" "range = [range[0], range[-1]] if range.length >= 2" "-e" "env = ({})" "-e" "data = measure('speedup.if_type', '/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/if_comp/if_type.cpp.erb', range, env, 1)")
set_tests_properties(speedup.if_type PROPERTIES  WORKING_DIRECTORY "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques" _BACKTRACE_TRIPLES "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/metabench.cmake;207;add_test;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;5;metabench_add_dataset;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;0;")
add_test(speedup.if_alias "/usr/bin/ruby" "-r" "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/_metabench/metabench.rb" "-e" "range = ((0...600).step(20)).to_a" "-e" "range = [range[0], range[-1]] if range.length >= 2" "-e" "env = ({})" "-e" "data = measure('speedup.if_alias', '/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/if_comp/if_alias.cpp.erb', range, env, 1)")
set_tests_properties(speedup.if_alias PROPERTIES  WORKING_DIRECTORY "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques" _BACKTRACE_TRIPLES "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/metabench.cmake;207;add_test;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;6;metabench_add_dataset;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;0;")
add_test(speedup.eager "/usr/bin/ruby" "-r" "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/_metabench/metabench.rb" "-e" "range = ((6...20).step(2)).to_a" "-e" "range = [range[0], range[-1]] if range.length >= 2" "-e" "env = ({})" "-e" "data = measure('speedup.eager', '/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/eager_vs_lazy/eager_remove_if.cpp.erb', range, env, 1)")
set_tests_properties(speedup.eager PROPERTIES  WORKING_DIRECTORY "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques" _BACKTRACE_TRIPLES "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/metabench.cmake;207;add_test;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;18;metabench_add_dataset;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;0;")
add_test(speedup.lazy "/usr/bin/ruby" "-r" "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/_metabench/metabench.rb" "-e" "range = ((6...40).step(2)).to_a" "-e" "range = [range[0], range[-1]] if range.length >= 2" "-e" "env = ({})" "-e" "data = measure('speedup.lazy', '/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/eager_vs_lazy/lazy_remove_if.cpp.erb', range, env, 1)")
set_tests_properties(speedup.lazy PROPERTIES  WORKING_DIRECTORY "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques" _BACKTRACE_TRIPLES "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/metabench.cmake;207;add_test;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;19;metabench_add_dataset;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;0;")
add_test(speedup.fast_tracking_with_dispatch "/usr/bin/ruby" "-r" "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/_metabench/metabench.rb" "-e" "range = ((10...1010).step(50)).to_a" "-e" "range = [range[0], range[-1]] if range.length >= 2" "-e" "env = ({})" "-e" "data = measure('speedup.fast_tracking_with_dispatch', '/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/fast_tracking_with_dispatch/fast_tracking.cpp.erb', range, env, 1)")
set_tests_properties(speedup.fast_tracking_with_dispatch PROPERTIES  WORKING_DIRECTORY "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques" _BACKTRACE_TRIPLES "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/metabench.cmake;207;add_test;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;30;metabench_add_dataset;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;0;")
add_test(speedup.lazy_uplimit "/usr/bin/ruby" "-r" "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/_metabench/metabench.rb" "-e" "range = ((10...1010).step(50)).to_a" "-e" "range = [range[0], range[-1]] if range.length >= 2" "-e" "env = ({})" "-e" "data = measure('speedup.lazy_uplimit', '/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/eager_vs_lazy/lazy_remove_if.cpp.erb', range, env, 1)")
set_tests_properties(speedup.lazy_uplimit PROPERTIES  WORKING_DIRECTORY "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques" _BACKTRACE_TRIPLES "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/metabench.cmake;207;add_test;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;31;metabench_add_dataset;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;0;")
add_test(speedup.fast_tracking_with_dispatch_tacit "/usr/bin/ruby" "-r" "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/_metabench/metabench.rb" "-e" "range = ((10...1010).step(50)).to_a" "-e" "range = [range[0], range[-1]] if range.length >= 2" "-e" "env = ({})" "-e" "data = measure('speedup.fast_tracking_with_dispatch_tacit', '/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/fast_tracking_with_dispatch/fast_tracking.cpp.erb', range, env, 1)")
set_tests_properties(speedup.fast_tracking_with_dispatch_tacit PROPERTIES  WORKING_DIRECTORY "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques" _BACKTRACE_TRIPLES "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/metabench.cmake;207;add_test;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;42;metabench_add_dataset;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;0;")
add_test(speedup.tacit_metaprogramming "/usr/bin/ruby" "-r" "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/build/_metabench/metabench.rb" "-e" "range = ((10...1010).step(50)).to_a" "-e" "range = [range[0], range[-1]] if range.length >= 2" "-e" "env = ({})" "-e" "data = measure('speedup.tacit_metaprogramming', '/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/tacit_mp/tacit_mp.cpp.erb', range, env, 1)")
set_tests_properties(speedup.tacit_metaprogramming PROPERTIES  WORKING_DIRECTORY "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques" _BACKTRACE_TRIPLES "/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/metabench.cmake;207;add_test;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;43;metabench_add_dataset;/home/traderbd/Desktop/C++_Projects/github/Benchmark_TemplateMetaProgramming_Techniques/speedUp/CMakeLists.txt;0;")
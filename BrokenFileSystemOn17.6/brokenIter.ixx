module;

#include <filesystem>

export module brokenIter;

export{

	struct thing {
		void iterDirBroken1() {
			for (const auto& i : std::filesystem::recursive_directory_iterator(".")) {
		
			}
		}

		inline static void iterDirBroken2() {
			for (const auto& i : std::filesystem::recursive_directory_iterator(".")) {

			}
		}
		
	};

	void noStructIter(){
		for (const auto& i : std::filesystem::recursive_directory_iterator(".")) {

		}

	}


}
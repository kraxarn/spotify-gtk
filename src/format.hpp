#pragma once

/*
 * From spotify-qt v4 until it's part of spotify-qt-lib:
 * https://github.com/kraxarn/spotify-qt/blob/v4/lib/format.hpp
 * Licensed under GPL-3
 */

#include <string>

namespace lib
{
	/**
	 * Formatting utilities
	 */
	class fmt
	{
	public:
		/**
		 * Format a string as a string
		 * @param fmt string
		 * @return string
		 */
		template<typename Format>
		static std::string format(const Format &fmt)
		{
			return fmt;
		}

		/**
		 * Format a string with specified arguments as {} in the string
		 * @param fmt string
		 * @param arg Argument to format
		 * @param args Arguments to format
		 * @return Formatted string
		 */
		template<typename Format, typename Arg, typename... Args>
		static std::string format(const Format &fmt, const Arg &arg, Args &&... args)
		{
			return format(collect(fmt, arg), args...);
		}

	private:
		/**
		 * Format string into another string
		 * @param fmt String with {} to replace
		 * @param arg String to replace {} with
		 * @return Formatted string
		 */
		template<typename Format>
		static std::string collect(const Format &fmt, const std::string &arg)
		{
			auto str = std::string(fmt);
			auto index = str.find("{}");
			if (index == std::string::npos)
				return str;

			return str.replace(index, 2, arg);
		}

		/**
		 * Format value into a string
		 * @param fmt String with {} to replace
		 * @param arg Value to replace {} with
		 * @return Formatted string
		 */
		template<typename Format, typename Arg>
		static std::string collect(const Format &fmt, const Arg &arg)
		{
			return collect(fmt, std::to_string(arg));
		}

		/**
		 * Format C-style string into a string
		 * @param fmt String with {} to replace
		 * @param arg C-style string to replace {} with
		 * @return Formatted string
		 */
		template<typename Format>
		static std::string collect(const Format &fmt, const char *arg)
		{
			return collect(fmt, std::string(arg));
		}

		/**
		 * Deprecated
		 */
		template<typename Format>
		static std::string collect(const Format &fmt, char *arg)
		{
			return collect(fmt, std::string(arg));
		}
	};
}
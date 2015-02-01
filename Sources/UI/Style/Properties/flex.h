/*
**  ClanLib SDK
**  Copyright (c) 1997-2015 The ClanLib Team
**
**  This software is provided 'as-is', without any express or implied
**  warranty.  In no event will the authors be held liable for any damages
**  arising from the use of this software.
**
**  Permission is granted to anyone to use this software for any purpose,
**  including commercial applications, and to alter it and redistribute it
**  freely, subject to the following restrictions:
**
**  1. The origin of this software must not be misrepresented; you must not
**     claim that you wrote the original software. If you use this software
**     in a product, an acknowledgment in the product documentation would be
**     appreciated but is not required.
**  2. Altered source versions must be plainly marked as such, and must not be
**     misrepresented as being the original software.
**  3. This notice may not be removed or altered from any source distribution.
**
**  Note: Some of the libraries ClanLib may link to may have additional
**  requirements or restrictions.
**
**  File Author(s):
**
**    Magnus Norddahl
*/

#pragma once

#include "API/UI/Style/style_property_parser.h"

namespace clan
{
	void force_link_style_parser_flex();

	class FlexPropertyParser : public StylePropertyParser
	{
	public:
		FlexPropertyParser() : StylePropertyParser({ "flex" }) { }
		void parse(StylePropertySetter *setter, const std::string &name, const std::string &value, const std::initializer_list<StylePropertyInitializerValue> &args) override;

	private:
		bool parse_grow_shrink(StyleValue &grow, StyleValue &shrink, size_t &parse_pos, const std::vector<StyleToken> &tokens);
		bool parse_basis(StyleValue &basis, size_t &parse_pos, const std::vector<StyleToken> &tokens);
	};

	class FlexBasisPropertyParser : public StylePropertyParser
	{
	public:
		FlexBasisPropertyParser() : StylePropertyParser({ "flex-basis" }) { }
		void parse(StylePropertySetter *setter, const std::string &name, const std::string &value, const std::initializer_list<StylePropertyInitializerValue> &args) override;
	};

	class FlexDirectionPropertyParser : public StylePropertyParser
	{
	public:
		FlexDirectionPropertyParser() : StylePropertyParser({ "flex-direction" }) { }
		void parse(StylePropertySetter *setter, const std::string &name, const std::string &value, const std::initializer_list<StylePropertyInitializerValue> &args) override;
	};

	class FlexFlowPropertyParser : public StylePropertyParser
	{
	public:
		FlexFlowPropertyParser() : StylePropertyParser({ "flex-flow" }) { }
		void parse(StylePropertySetter *setter, const std::string &name, const std::string &value, const std::initializer_list<StylePropertyInitializerValue> &args) override;

	private:
		bool parse_direction(StyleValue &direction, size_t &parse_pos, const std::vector<StyleToken> &tokens);
		bool parse_wrap(StyleValue &wrap, size_t &parse_pos, const std::vector<StyleToken> &tokens);
	};

	class FlexGrowPropertyParser : public StylePropertyParser
	{
	public:
		FlexGrowPropertyParser() : StylePropertyParser({ "flex-grow" }) { }
		void parse(StylePropertySetter *setter, const std::string &name, const std::string &value, const std::initializer_list<StylePropertyInitializerValue> &args) override;
	};

	class FlexShrinkPropertyParser : public StylePropertyParser
	{
	public:
		FlexShrinkPropertyParser() : StylePropertyParser({ "flex-shrink" }) { }
		void parse(StylePropertySetter *setter, const std::string &name, const std::string &value, const std::initializer_list<StylePropertyInitializerValue> &args) override;
	};

	class FlexWrapPropertyParser : public StylePropertyParser
	{
	public:
		FlexWrapPropertyParser() : StylePropertyParser({ "flex-wrap" }) { }
		void parse(StylePropertySetter *setter, const std::string &name, const std::string &value, const std::initializer_list<StylePropertyInitializerValue> &args) override;
	};

	class OrderPropertyParser : public StylePropertyParser
	{
	public:
		OrderPropertyParser() : StylePropertyParser({ "order" }) { }
		void parse(StylePropertySetter *setter, const std::string &name, const std::string &value, const std::initializer_list<StylePropertyInitializerValue> &args) override;
	};
}

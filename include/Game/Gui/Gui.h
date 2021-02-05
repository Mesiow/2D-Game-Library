#pragma once
#include <TGUI/TGUI.hpp>
#include <vector>
#include <functional>

namespace gui {
	tgui::Label::Ptr createLabel(const std::string& text, const sf::Vector2f& position);
	tgui::Button::Ptr createButton(const std::string& text,
		std::function<void()> action = nullptr);

	tgui::VerticalLayout::Ptr createMenu(const std::vector<std::string>& btnNames,
		const sf::Vector2f& position);
}
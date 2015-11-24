/******************************************************************************
 * Copyright (C) 2015 by Ralf Kaestner                                        *
 * ralf.kaestner@gmail.com                                                    *
 *                                                                            *
 * This program is free software; you can redistribute it and/or modify       *
 * it under the terms of the Lesser GNU General Public License as published by*
 * the Free Software Foundation; either version 3 of the License, or          *
 * (at your option) any later version.                                        *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the               *
 * Lesser GNU General Public License for more details.                        *
 *                                                                            *
 * You should have received a copy of the Lesser GNU General Public License   *
 * along with this program. If not, see <http://www.gnu.org/licenses/>.       *
 ******************************************************************************/

#ifndef RQT_MULTIPLOT_MULTIPLOT_WIDGET_H
#define RQT_MULTIPLOT_MULTIPLOT_WIDGET_H

#include <QWidget>

#include <rqt_multiplot/MultiplotConfig.h>

namespace Ui {
  class MultiplotWidget;
};

namespace rqt_multiplot {
  class MultiplotWidget :
    public QWidget {
  Q_OBJECT
  public:
    MultiplotWidget(QWidget* parent = 0);
    virtual ~MultiplotWidget();
    
    MultiplotConfig* getConfig() const;
    
  private:
    Ui::MultiplotWidget* ui_;
    
    MultiplotConfig* config_;
  };
};

#endif